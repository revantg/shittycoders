/* 
	9 A - Find Extra One 
	author : ltra_golu | submitted at : 2018-09-29 16:46:06
	time taken : 77 ms | memory consumed : 300 KB
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
    ll n, x, y; cin >> n;
    int c1 = 0, c2 = 0, c3 = 0, c4 = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> x >> y;
        if (x > 0) c1++;
        if (x < 0) c2++;
    }
    if ((c1 == 1 or c2 == 1)) return cout << "Yes", 0;
    if (c1 == 0 or c2 == 0) return cout << "Yes", 0;
    cout << "No";
}