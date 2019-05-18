/* 
	1 B - Vasya and Cornfield 
	author : ltra_golu | submitted at : 2018-09-23 17:19:56
	time taken : 31 ms | memory consumed : 8 KB
*/
#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define fs first
#define sc second
#define bg begin
#define ll long long
#define vi vector<ll>
#define vii vector<pair<ll, ll>>
#define mii map<ll, ll>
#define vii vector<pair<ll, ll>>
#define hello ios::sync_with_stdio(false);

int main()
{
    hello
    ll num, dig; cin >> num >> dig;
    ll q; cin >> q;

    while (q--)
    {
        ll x, y;
        cin >> x >> y;
        ll temp1 = x + y;
        ll val = 1;
        if (temp1 < dig)
        {
            val = 0; cout << "NO" << endl;
            continue;
        }
        if (temp1 > (2 * num - dig))
        {
            val = 0; cout << "NO" << endl;
            continue;
        }
        if ((x - y) > dig)
        {
            val = 0; cout << "NO" << endl;
            continue;
        }
        if ((y - x) > dig)
        {
            val = 0; cout << "NO" << endl;
            continue;
        }
        cout << "YES" << endl;
    }
}