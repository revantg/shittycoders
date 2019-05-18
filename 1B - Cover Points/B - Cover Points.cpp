/* 
	1 B - Cover Points 
	author : ltra_golu | submitted at : 2018-10-02 00:01:45
	time taken : 78 ms | memory consumed : 20 KB
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
    ll n; cin >> n;
    ll mx = 0;
    for(int i = 0; i < n; i++)
    {
        ll a, b; cin >> a >> b;
        mx = max(a+b, mx);
    }
    cout << mx;
}