#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, t; cin >> n >> t;
    if (t == 10)
    {
        if (n == 1) return cout << -1, 0;
        cout << 1;
        for(int i = 0; i < n - 1; i++)
            cout << 0;
    }
    else    
        for (int i = 0; i < n; i++)
            cout << t;
}