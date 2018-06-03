#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long x, y, n;
    cin >> x >> y >> n;
    long long mod = 1e9 + 7, ans;
    switch (n % 6)
    {
    case 1:
        ans = x % mod;
        break;
    case 2:
        ans = y % mod;
        break;
    case 3:
        ans = (y - x) % mod;
        break;
    case 4:
        ans = (-1 * x) % mod;
        break;
    case 5:
        ans = (-1 * y) % mod;
        break;
    case 0:
        ans = (x - y) % mod;
        break;
    }
    if (ans < 0) cout<< (ans+mod) % mod;
    else cout<<ans;
}
