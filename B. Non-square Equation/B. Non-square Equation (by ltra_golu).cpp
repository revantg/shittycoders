#include <bits/stdc++.h>
using namespace std;
int count(long long a)
{
    int temp = a, c = 0;
    while (temp > 0)
    {
        c += temp % 10;
        temp /= 10;
    }
    return (c);
}
int main()
{
    long long n, mn = 1e9;
    cin >> n;
    for (int i = 0; i <= 9 * 18; i++)
    {
        long long temp = i * i + (4 * n);
        long long x1 = (-1 * i + sqrt(temp)) / 2;
        long long  x2 = (-1 * i - sqrt(temp)) / 2;
        if (x1 > 0 and (x1 * x1) + (i * x1) - n == 0 and count(x1) == i)
            mn = min(mn, x1);
        if (x2 > 0 and (x2 * x2) + (i * x2) - n == 0 and count(x2) == i)
            mn = min(mn, x2);
    }
    if (mn == 1e9)
        cout << "-1";
    else
        cout << mn;
}

// 2