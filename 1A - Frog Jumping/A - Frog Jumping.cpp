/* 
	1 A - Frog Jumping 
	author : ltra_golu | submitted at : 2018-11-17 11:35:33
	time taken : 31 ms | memory consumed : 8 KB
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
    ll t; cin >> t;
    while(t--)
    {
        ll k, a, b; cin >> a >> b >> k;
        ll ans;
        if (k % 2 == 0)
            ans = (k / 2)*(a - b);
        else    
            ans = (((k + 1) / 2) * a) - ((k/2) * b);
        cout << ans << endl; 
    }
}