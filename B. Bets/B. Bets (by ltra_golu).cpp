#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, a, b, c, d; cin >> n >> m;
    vector <pair<int, int> > v(n+1);
    for(int i = 1; i <= n; i++) v[i].first = 1001;
    while(m--)
    {
        cin >> a >> b >> c >> d;
        for(int i = a; i <= b; i++)
            if (c < v[i].first) v[i].first = c, v[i].second = d;
    }
    long long sum = 0;
    for(int i = 0; i <= n; i++) if (v[i].first != 1001) sum += v[i].second;
    cout << sum;
}
