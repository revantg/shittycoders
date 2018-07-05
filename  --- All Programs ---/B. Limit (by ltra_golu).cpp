#include <bits/stdc++.h>
using namespace std;
long long gcd(long long a, long long b)
{
    for (; a; swap(b %= a, a))
        ;
    return b;
}
int main()
{
    int m, n; cin >> m >> n; m++, n++;
    int num, den;
    vector <int> a(m),b(n);
    for(int i = 0; i < m; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];
    if (m > n)
    {
        if ((a[0] < 0 or b[0] < 0) and (a[0] > 0 or b[0] > 0)) cout << "-Infinity";
        else cout << "Infinity";
    }
    else if (m < n)
        cout << "0/1";
    else
    {
        num = a[0], den = b[0];
        if ((a[0] < 0 or b[0] < 0) and (a[0] > 0 or b[0] > 0))
            cout << "-";
        a[0] = abs(a[0]), b[0] = abs(b[0]);
        long long g = gcd(a[0], b[0]);
        cout << a[0] / g << "/" << b[0] / g;
    }
}