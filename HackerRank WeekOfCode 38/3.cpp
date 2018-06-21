#include <bits/stdc++.h>
using namespace std;
 
typedef vector<long long int> vli;
typedef pair<long long int,long long int> pii;
typedef vector< pii > vlli;
#define INF 0x3f3f3f3f
 
vlli *G;   // Graph
vli Dist;  // for storing the distance of every other node from Start.
long long int path[100100];
/*==========================================*/
void Dijkstra(long long int Start,long long int N) {
    priority_queue<pii, vector<pii>, greater<pii> > Q;   // min heap
    Dist.assign(N,INF);
    Dist[Start] = 0;
    Q.push({0,Start});
    while(!Q.empty()){
       long long int u = Q.top().second;
        Q.pop();
        for(auto &c : G[u]){
            long long int v = c.first;
            long long int w = c.second;
            //cout<<v<<" "<<w<<" ";
            if(Dist[v] > Dist[u]+w){
                Dist[v] = Dist[u]+w;
                path[v]=u;
                Q.push({Dist[v],v});
            }
        }
    }
}
int main() {
    long long int n,k,m,u,v,w,i;  
    cin>>n>>k>>m;              
    G = new vlli[n+1];
    
    for(long long int i=0;i<m;++i){
        cin >> u >> v >> w;
        G[u].push_back({v,w});
        G[v].push_back({u,w});
    }
    Dijkstra(1,n+1);
     long long int pg[1001000],kb=0;
    while(path[n])
    {
       
        pg[kb]=n;
        kb++;
        n=path[n];
       
    }
   pg[kb]=n;
    long long int ans=0,z=1;
    for(i=kb;i>0;i--)
    {
        for(auto x:G[pg[i]])
        {
            if(x.first==pg[i-1])
            {
                if((ans/k)%2==0)
                {
                    ans=ans+x.second;
                }
                else
                {
                    ans=ans+x.second+(k-ans%k);
                }
            }
        }
    }
    cout<<ans;
    return 0;
}