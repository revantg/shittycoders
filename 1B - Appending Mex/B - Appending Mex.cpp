/* 
	1 B - Appending Mex 
	author : ltra_golu | submitted at : 2018-10-18 19:56:21
	time taken : 62 ms | memory consumed : 792 KB
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
#define sll set<ll>
#define uos unordered_set<ll>
#define vii vector<pair<ll, ll>>
#define mii map<ll, ll>
#define vii vector<pair<ll, ll>>
#define hello ios::sync_with_stdio(false);

int main()
{
    hello
    ll num; cin >> num;
    // ll a[n + 1];
    vi a(num+1);
    for (ll i = 0; i < num; i++)
        cin >> a[i];
    if (a[0] != 0)
        return cout << "1", 0;
    ll minimum = 0;
    for (ll i = 1; i < num; i++)
    {
        if (a[i] <= minimum + 1)
        {
            if (a[i] > minimum) minimum = a[i]; continue;
        }
        else
            return cout << i + 1, 0;
    }
    cout << "-1";

}