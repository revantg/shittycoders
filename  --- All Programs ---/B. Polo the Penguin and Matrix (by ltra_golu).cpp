#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m, n, d; cin >> m >> n >> d;
    vector <int> a(m * n);
    for(long int  i = 0; i < (m * n); i++) cin >> a[i];
    sort(a.begin(), a.end());
    int mid = a[(m * n) / 2];
    int total = 0;
    for(int i = 0; i < (m * n); i++) 
        if (abs(a[i] - mid) % d == 0)
            total += abs(a[i] - mid) / d;
        else {
            cout << "-1";
            return(0);
        }
    cout << total;
}