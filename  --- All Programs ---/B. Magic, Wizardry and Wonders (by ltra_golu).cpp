#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, l; cin >> n >> k >> l;
    vector <int> v(n);
    for (int i = 0; i < n; i++)
    {
        if (k > 0) v[i] = l;
        else v[i] = 1;
        k = v[i] - k;
    }
    v[n - 1] -= k;
    if (v[n - 1] > 0 and v[n - 1] <= l)
        for(int i = 0; i < n; i++) cout << v[i] << " ";
    else
        cout << "-1";
}