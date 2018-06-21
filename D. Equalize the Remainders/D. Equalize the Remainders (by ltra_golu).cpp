#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m; cin >> n >> m;
    vector <int> v(n);
    map <int, vector <int> > rem;
    for(int i = 0; i < n; i++)
    { 
        cin >> v[i];
        rem[v[i] % m].push_back(i);
    }
    vector <int
    for(int  i = 0; i < m; i++)
    {
        if (rem[i].size() > n/m)
            extras += rem[i].size() - (n/m);
    }
    
}