/* 
	1 A - King Escape 
	author : ltra_golu | submitted at : 2018-10-07 20:30:23
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
    ll n; cin >> n;
    ll ax, ay, bx, by, cx, cy;
    cin >> bx >> by >> ax >> ay >> cx >> cy;

    ll d1x = bx - ax;
    ll d1y = by - ay;
    ll d2x = bx - cx;
    ll d2y = by - cy;

    if (((d1x < 0 and d2x < 0) or (d1x > 0 and d2x > 0)) and ((d1y < 0 and d2y < 0) or (d1y > 0 and d2y > 0)))
        cout << "YES";
     else cout << "NO";
    //  cout << endl << d1x << d2x << endl;
    //  cout << d1y << d2y;
    // if (ax < bx and cx < bx and ay < by and cy < by)
    //     return cout << "YES", 0;
    // else if ( ax > bx and ay > by and cx > ax and cy > by)
    //     return cout << "YES", 0;
    // else if (ax < bx and ay > by and cx < bx and cy > by)
    //     return cout << "YES", 0;
    // else if (ax > bx and cx > bx and ay < by and cy < by)
    //     return cout << "YES", 0;
    // else return cout << "NO", 0;
}