#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, st, a, b; cin >> n >> st;
    vector <int> v(1001);
    for(int i = 1; i <=n; i++)
    {
        cin >> a >> b;
        if (b < a) swap(a, b);
        for(int i = a; i <= b; i++) v[i]++;
    }
    int mn = 9999999;
    for(int i = 0; i <= 1000; i++)
        if (v[i] == n and abs(i - st) < mn) mn = abs(i - st);
    if (mn == 9999999) cout << "-1";
    else cout << mn;
}












    // int mx1 = 0, pos1 = 0, mx2 = 0, pos2 = 0;
    // for(int i = st; i > 0; i--)
    //     if (v[i] > mx1) mx1 = v[i], pos1 = i;
    // for(int i = st; i <= n; i++)
    //     if (v[i] > mx2) mx2 = v[i], pos2 = i;
    // cout << min(abs(st - pos1), abs(st - pos2));