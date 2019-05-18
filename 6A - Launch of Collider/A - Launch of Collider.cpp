/* 
	6 A - Launch of Collider 
	author : ltra_golu | submitted at : 2018-10-03 19:03:27
	time taken : 78 ms | memory consumed : 2068 KB
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
    ll n, mn = 9999999999; cin >> n;
    vi pos(n);
    vector <char> dir(n);
    for(int i = 0; i < n; i++) cin >> dir[i];
    for(int i = 0; i < n; i++) cin >> pos[i];

    for(int i = 0; i < n - 1; i++)
    {
        if (dir[i] != dir[i+1] and dir[i] == 'R') mn = min(abs(pos[i] - pos[i + 1]) / 2, mn);
    }
    if (mn == 9999999999)
        cout << -1;
    else cout << mn;
}