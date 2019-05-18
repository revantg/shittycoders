/* 
	1 A - Funky Numbers 
	author : ltra_golu | submitted at : 2018-09-26 21:39:37
	time taken : 92 ms | memory consumed : 3704 KB
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
    mii m;
    ll n; cin >> n;
    for(ll i = 1; ;i++)
    {
        // if (i * (i+1) / 2 == 259)cout << i << endl;
        if (i * (i + 1) / 2 <= n)
            m[i*(i+1)/2] = 1;
        else break;
    }
    for(auto x : m)
    {
        if (n >= x.fs and m[n - x.fs] == 1 and m[x.fs] == 1) return cout << "YES", 0;
    }
    cout << "NO";

}