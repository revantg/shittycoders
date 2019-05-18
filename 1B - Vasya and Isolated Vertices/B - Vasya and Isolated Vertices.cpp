/* 
	1 B - Vasya and Isolated Vertices 
	author : ltra_golu | submitted at : 2018-10-11 18:43:52
	time taken : 30 ms | memory consumed : 8 KB
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
#define                       sll set <ll>
#define             uos unordered_set <ll>
#define        vii vector <pair <ll, ll> >
#define                 mii map < ll, ll >
#define        vii vector <pair <ll, ll> >
#define  hello ios::sync_with_stdio(false);

int main()
{
    hello
    ll a, b; cin >> a >> b;
    ll mn;   
    if (b * 2 < a) mn = a - (2 * b);
    else mn = 0;

    if (b == 0) return cout << mn << " " << a, 0;

    // long double aa = 1, bb = -1, cc = (-2 * b);
    long double mx = (((long double)1 + (long double)pow((long double)(1 + (8 * b)), 0.5))) / (long double) 2;
    ll ans = a - ceil(mx);
    cout << mn << " " << ans;
    // cout << max(mn, (ll)0);
}   