/* 
	2 B - Hometask 
	author : ltra_golu | submitted at : 2018-07-01 06:39:54
	time taken : 122 ms | memory consumed : 7308 KB
*/
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long ll;
#define Eps 1e-9

int a[100100];
int memo[100100][3];
int n;
vector<int> ans;

int dp(int i,int sum)
{
    if(i==n)
    {
        if(sum==0)
            return 0;
        else
            return -1e9;
    }
    
    int &ret=memo[i][sum];
    if(ret!=-1) return ret;
    
    int c1=dp(i+1,(sum+a[i])%3)+1;
    int c2=dp(i+1,sum);
    
    return ret=max(c1,c2);
         
}

void path(int i,int sum){
    
    if(i==n)
    {
        return;
    }
    
    int ret=dp(i,sum);
    int c1=dp(i+1,(sum+a[i])%3)+1;
    int c2=dp(i+1,sum);
    if(ret==c1)
    {
        ans.push_back(a[i]);
        path(i+1,(sum+a[i])%3);
    }
    else
    {
        path(i+1,sum);
    }
}

int main(int argc, char** argv) {
    //freopen("in.txt", "r", stdin);
    //freopen("outt.txt", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    memset(memo,-1,sizeof memo);
   
    cin>>n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    
    sort(a,a+n,greater<int> ());
    if(a[n-1]!=0) return cout<<-1<<endl,0;
    
    
    path(0,0);
    
    if(ans[0]==0) return cout<<0<<endl,0;
    
    for(int i=0;i<ans.size();i++)
        cout<<ans[i];
    cout<<endl;

    return 0;
}