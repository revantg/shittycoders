/* 
	4 B - Pashmak and Flowers 
	author : ltra_golu | submitted at : 2018-08-08 00:22:15
	time taken : 483 ms | memory consumed : 9632 KB
*/
#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define fs first
#define sc second
#define ll long long
#define vi vector <ll> 
#define mii map <ll, ll>
#define vii vector <pair <ll, ll> >
int main()
{
    ll n, mn  = 99999999999, mx = 0; cin >> n;
    vi v(n);
    mii m;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        m[v[i]]++;
        mn = min(mn, v[i]);
        mx = max(mx, v[i]);
    }
    if (mx == mn) cout << "0 " << m[mx] * (m[mx] - 1) / 2;
    else cout << mx - mn << " " << m[mx] * m[mn];
}