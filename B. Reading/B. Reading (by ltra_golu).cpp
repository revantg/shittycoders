#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n, k, count = 0;
    cin >> n >> k;
    vector<int> v(n);
    map<int, int> loc;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        loc[v[i]] = i + 1;
    }
    vector<int> v2(v.begin(), v.end());
    sort(v.begin(), v.end());
    cout << v[n - k] << endl;
    for (int i = 0; i < n and count < k; i++)
        if (v2[i] >= v[n - k])
            cout << i << " ", count++;
    
}