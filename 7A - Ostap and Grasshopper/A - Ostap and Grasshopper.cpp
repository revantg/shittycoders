/* 
	7 A - Ostap and Grasshopper 
	author : ltra_golu | submitted at : 2018-10-03 22:29:57
	time taken : 31 ms | memory consumed : 12 KB
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
    ll n, k; cin >> n >> k;
    string s; cin >> s;
    vi v(n);
    ll init = -1, target = -1;
    for(int i = 0; i < n; i++)
    {
        if (s[i] == '#')v[i] = 1;
        if (s[i] == 'G') init = i;
        if (s[i] == 'T') target = i;
    }
    if (init == target) return cout << "YES", 0;
    if (target > init)
    {
        ll t = init;
        while(t <= target)
        {
            t+=k;
            if (t == target) return cout << "YES", 0;
            if (v[t] == 1) return cout << "NO", 0;
        }
        if (t == target) return cout << "YES", 0;
    }
    else 
    {
        ll t = init;
        while(t >= target)
        {
            t -= k;
            if (v[t] == 1) return cout << "NO", 0;
            if (t == target) return cout << "YES", 0;
        }
        if (t == target) return cout << "YES", 0;
    }
    cout << "NO";
}