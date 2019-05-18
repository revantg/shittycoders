/* 
	4 C - Exams 
	author : ltra_golu | submitted at : 2018-07-21 09:10:54
	time taken : 46 ms | memory consumed : 56 KB
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;
    vector <pair <int, int>> v(n);
    int a, b, mx = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> a >> b;
        v[i] = make_pair(a,b);
    }    
    sort(v.begin(), v.end());
    for(int i = 0; i < n - 1; i++)
    {
        mx = max(mx, v[i].second);
        if (v[i].second < mx) mx = v[i].first;
    }
    if (v[n-1].second >= mx) cout << v[n-1].second;
    else cout << v[n-1].first;
}
