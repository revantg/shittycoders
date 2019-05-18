/* 
	4 C - Pashmak and Buses 
	author : ltra_golu | submitted at : 2018-08-08 01:01:04
	time taken : 109 ms | memory consumed : 3980 KB
*/
#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define fs first
#define sc second
#define ll long long
#define vi vector <ll> 
#define vii vector <pair <ll, ll> >
#define hello ios::sync_with_stdio(false);
int main()
{
    hello
    ll n ,k, d; cin >> n >> k >> d;
    ll tmp = 1, f = 0;
    for (int i = 0; i < d; i++)
    {
        tmp *= k; 
        if (tmp >= n) f = 1;
    }
    if (!f) return cout << "-1", 0;
    int ans[1010][1010];
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < d; j++) ans[i][j] = ans[i-1][j];
        for (int j = d - 1; j >= 0; j--)
        {
            ans[i][j] = (ans[i][j] + 1) % k;    
            if (ans[i][j]) break;
        }
    }
    for (int i = 0; i < d; i++, cout << endl)
        for (int j = 0; j < n; j++)
            cout << ans[j][i] + 1 << " ";
}