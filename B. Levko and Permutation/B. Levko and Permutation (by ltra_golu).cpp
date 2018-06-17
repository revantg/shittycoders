#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n + 1);
    if (n - k < 1)
        return cout << "-1", 0;

    for (int i = 2; i < n; i++)
        if (i <= k + 1)
            v[i] = i;
        else
            v[i] = i + 1;

    v[1] = k + 2, v[n] = 1;
    if (n - k == 1) v[n] = n , v[1] = 1;
    //     v[1] = n, v[n] = 1, v[n - 1] = 2;
    for (int i = 1; i <= n; i++)
        cout << v[i] << " ";
}