#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a, b; cin >> n;
    vector <vector <int> > v(n+1, vector <int> (n+1));
    for(int i = 1; i < (n * (n - 1) )/ 2; i++)
    {
        cin >> a >> b;
        v[a][b] = v[b][a] = a;
    }
    for(int i = 1; i <= n; i++)
    {
        for(int j = i +1; j <= n; j++)
            if (v[i][j] == 0)
            {
                for(int k = 1; k <= n; k++)
                {
                    if (v[i][k] == i and v[k][j] == k) return cout << i << " " << j, 0;
                    if (v[i][k] == k and v[k][j] == j) return cout << j << " " << i, 0;
                }
                cout << i << " " << j;
            }
    }
}