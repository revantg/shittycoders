#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, x; cin>>n>>m;
    set <int> s;
    for (int i = 0; i < n; i++)
    {
        cin>>x;
        s.insert(x);
    }
    for (int i = 0; i < m; i++)
    {
        cin>>x;
        for (auto it : s)
        {
            if (x >= it)
            {
                s.erase(it);
                break;
            }
        }
    }
    cout << s.size();
    return 0;
}