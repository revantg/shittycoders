#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int i = 1;
    for (i = 1; i <= k; i++)
    {
        cout << 2 * i << " " << 2 * i - 1 << " ";
    }
    for (; i <= n; i++)
    {
        cout << 2 * i - 1 << " " << 2 * i << " ";
    }
    return 0;
}