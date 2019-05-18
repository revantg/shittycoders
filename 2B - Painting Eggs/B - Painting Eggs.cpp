/* 
	2 B - Painting Eggs 
	author : ltra_golu | submitted at : 2018-05-30 15:29:26
	time taken : 4086 ms | memory consumed : 5124 KB
*/
#include<bits/stdc++.h>

using namespace std;

typedef pair<int, int> pii;
typedef long long ll;
int dc[] = {0,0,-1,1};
int dr[] = {-1, 1, 0 , 0};

int main()
{
    int n,x,y,flag=0;
    vector<char> v;
    cin>>n;
    ll sa=0,sb=0;
    for(int i=0;i<n;i++)
    {
        cin>>x>>y;
        if(abs(sa-sb+ x)<=500)
           {sa+=x;v.push_back('A');}
        else if(abs(sa-sb-y)<=500)
            {sb+=y;v.push_back('G');}
        if(abs(sa-sb)>500)
            flag=1;

    }
    if(flag==1)
        cout<<-1;
    else{
    for(int i=0;i<n;i++)
        cout<<v[i];
    }
    return 0;

}