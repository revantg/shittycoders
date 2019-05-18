/* 
	3 C - Xenia and Weights 
	author : ltra_golu | submitted at : 2018-08-06 21:17:23
	time taken : 30 ms | memory consumed : 64 KB
*/
#include<bits/stdc++.h>
#define vi vector<int>
#define vll vector<long long>
#define ll long long
#define ull unsigned long long
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL)
#define nl cout<<endl
#define pb push_back
#define mp make_pair
#define pi pair<int,int>
#define pll pair<long long,long long>
#define si set<int>
#define sll set<long long>
#define all(v) (v).begin(),(v).end()

#define printi(x) printf("%d\n", x)
#define printll(x) printf("%lld\n", x)
#define prints(x) printf("%s\n", x)

ll mod = 1e9+7;
const int MAX = 1e5+5;
using namespace std;

int m;
vi adj[11];
string s;
int ans[1001];
bool dfs(int n,int diff){
	if(n>m){
		return 1;
	}
	for(int i=diff+1;i<=10;i++){
		if(s[i-1]=='1' && ans[n-1]!=i){
			ans[n]=i;
			if(dfs(n+1,i-diff)){
				return 1;
			}
		}
	}
	return 0;
	
}

int main()
{
FAST_IO;
cin>>s;
cin>>m;
if(dfs(1,0)){
	cout<<"YES"<<endl;
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" "; 
	}
}
else{
	cout<<"NO";
}
return 0;
}