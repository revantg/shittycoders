#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio; cin.tie(0); cout.tie(0);
using namespace std;
int main()
{
    fast;
    int N; cin >> N;
    int a[N+1], g[N+1], sum = 0;
    for (int i = 1; i <= N; i++)
    {
        cin >> a[i] >> g[i];
        if (sum + a[i] <= 500)
        {
            sum += a[i];
            cout << "A";
        }
        else
        {
            sum -= g[i];
            cout << "G";
        }
    }
    // cout << a << b;
}