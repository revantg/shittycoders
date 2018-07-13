#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, x, sum = 0; cin >> n;
    for(int i = 1; i <= n; i++)
        cin >> x, sum += (x - 1) * i;
    cout << sum + n;
}