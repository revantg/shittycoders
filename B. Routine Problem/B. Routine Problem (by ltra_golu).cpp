#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, d; cin >> a >> b >> c >> d;
    int ans1, ans2;
    int val1 = a * d;
    int val2 = b * c;
    int hcf = __gcd(val1, val2);
    if (val1 > val2)
    {
        ans1 = (val1 - val2) / hcf;
        ans2 = val1 / hcf;
    }
    else if (val1 < val2)
    {
        ans1 = (val2 - val1) / hcf;
        ans2 = val2 / hcf;
    }
    else {
        ans1 = 0; ans2 = 1;}
    cout << ans1 << "/" << ans2;
}