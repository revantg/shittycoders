/* 
	1 C - Vasya and Multisets 
	author : ltra_golu | submitted at : 2018-09-21 17:17:35
	time taken : 31 ms | memory consumed : 152 KB
*/
#include <bits/stdc++.h>
using namespace std;

#define                       pb push_back
#define                       mp make_pair
#define                           fs first
#define                          sc second
#define                           bg begin
#define                       ll long long
#define                     vi vector <ll>
#define        vii vector <pair <ll, ll> >
#define                 mii map < ll, ll >
#define        vii vector <pair <ll, ll> >
#define  hello ios::sync_with_stdio(false);

int main()
{
    hello
    ll n, temp; cin >> n;
    mii m;
    vi v(n);
    ll freq1 = 0, freq3 = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
        m[v[i]]++;
    }
    for(auto x : m)
    {
        if (x.sc == 1)freq1++;
        else if (x.sc > 2)freq3++;
    }
    ll lim, f = 0;
    if (freq1 % 2 != 0 and freq3 == 0) return cout << "NO", 0;
    if (freq1 == 0 or freq1 % 2 == 0) lim = freq1 / 2;
    else if (freq1 % 2 != 0 and freq3 >= 1) lim = (freq1 / 2), f = 1;

    string ans(n, 'A');
    cout << "YES\n";
    ll i;
    for(i = 0; i < n; i++)
    {
        if (lim > 0 and m[v[i]] == 1)
            ans[i] = 'B', lim--;
        else if(m[v[i]] > 2 and f == 1)
            {ans[i] = 'B'; f = 0;}
    }
    cout << ans;
}