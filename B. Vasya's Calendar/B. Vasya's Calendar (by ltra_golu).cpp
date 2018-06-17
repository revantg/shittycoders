#include <bits/stdc++.h>
using namespace std;
int main()
{
    int d, n, count = 0;
    cin >> d >> n;
    vector<int> v(n);
    for (int i = 0; i < n - 1; i++)
    {
        cin >> v[i];
        if (v[i] < d)
            count += (d - v[i]);
    }
    cout << count;
}