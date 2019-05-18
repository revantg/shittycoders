/* 
	1 A - Golden Plate 
	author : ltra_golu | submitted at : 2018-10-22 03:50:42
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
#define                       sll set <ll>
#define             uos unordered_set <ll>
#define        vii vector <pair <ll, ll> >
#define                 mii map < ll, ll >
#define        vii vector <pair <ll, ll> >
#define  hello ios::sync_with_stdio(false);

int main()
{
    hello
    ll w, h, k; cin >> w >> h >> k;
    ll cells = 0, rings = k;
    while(rings)
    {
        if (h == 1) cells += w;
        else if (w == 1) cells += h;
        else {
            cells += 2*w + 2*h - 4;
            w -= 4;
            h -= 4;
        }
        rings--;
    }
    cout << cells;
}