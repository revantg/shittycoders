#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;
    int mx = 0, temp;;
    map <int , int> m;
    for(int i = 0; i < n; i++)
    {
        cin >> temp;
        m[temp]++;
        mx = max(mx, m[temp]);
    }
    cout << mx;
}