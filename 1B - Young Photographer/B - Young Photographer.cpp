/* 
	1 B - Young Photographer 
	author : ltra_golu | submitted at : 2018-07-12 06:35:13
	time taken : 62 ms | memory consumed : 8 KB
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, st, a, b; cin >> n >> st;
    vector <int> v(1001);
    for(int i = 1; i <=n; i++)
    {
        cin >> a >> b;
        if (b < a) swap(a, b);
        for(int i = a; i <= b; i++) v[i]++;
    }
    int mn = 9999999;
    for(int i = 0; i <= 1000; i++)
        if (v[i] == n and abs(i - st) < mn) mn = abs(i - st);
    if (mn == 9999999) cout << "-1";
    else cout << mn;
}
