#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long m, n;
    cin >> n >> m;
    if (n == 1 and m == 1)
        cout << "1";
    else if (m > n / 2)
        cout << m - 1;
    else
        cout << m + 1;
}