/* 
	2 B - Forming Teams 
	author : ltra_golu | submitted at : 2018-07-11 03:28:45
	time taken : 62 ms | memory consumed : 156 KB
*/
#include<bits/stdc++.h>
using namespace std ;
vector <int> adj[1234];
bool vis[1234] ;
int sz = 0 ;
bool dfs(int i , int p)
{
    if(vis[i])return 1 ;
    vis[i] = 1 ;

    bool res = 0 ;

    for(int j = 0 ; j < adj[i].size() ; j ++ )
        if(adj[i][j] != p) res = dfs(adj[i][j] , i) ;

    sz++;

    return res ;
}
int main()
{
    int n , m ;
    cin >> n >> m;
    long long v , u ;
    for(int i = 0 ; i < m ; i++ ) cin >> u >> v , adj[u].push_back(v) , adj[v].push_back(u) ;
    long long ans = 0 ,sum=0 ;
    for(int i = 1 ; i <= n ; i ++ )
    {
        if(!vis[i])
        {
            if(dfs( i ,-1)) ans +=  (sz%2 != 0)  ;
            else sum += sz ;
            sz = 0 ;
        }
    }
    if(sum %2 != 0 ) ans++;
    cout << ans <<endl;
}
