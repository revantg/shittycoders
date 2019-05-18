/* 
	1 A - Arrival of the General 
	author : ltra_golu | submitted at : 2018-06-01 00:19:22
	time taken : 30 ms | memory consumed : 3284 KB
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, min = 999999, max = 0, minpos, maxpos; cin >> n;
    vector <int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
        if (v[i] <= min) {
            minpos = i;
            min = v[i];
        }
        if (v[i] > max) {
            maxpos = i;
            max = v[i];
        }
    }
    int ans;
    ans = (n-1) - minpos;
    ans += maxpos;
    if (minpos < maxpos)
        ans--;
    cout<<ans;
}