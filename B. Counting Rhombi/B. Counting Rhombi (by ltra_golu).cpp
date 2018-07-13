#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long w, h;
    cin >> w >> h;

    long long s = 0;
    for (int i = 1; 2 * i <= w; i++)
    {
        s += ((w - 2 * i) + 1);
    }
    long long t = 0;
    for (int i = 1; 2 * i <= h; i++)
    {
        t += ((h - 2 * i) + 1);
    }
    long long ans = s * t;
    cout << ans;
}