/* 
	1 A - Vasya and Chocolate 
	author : ltra_golu | submitted at : 2018-10-11 17:56:31
	time taken : 30 ms | memory consumed : 4 KB
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
    ll t;  cin >> t;
    while (t--)
    {
        ll s, a, b, c; cin >> s >> a >> b >> c;
        ll temp = s / c;
        ll temp2 = temp / a;
        cout << temp + temp2 * b << endl;
    }
}