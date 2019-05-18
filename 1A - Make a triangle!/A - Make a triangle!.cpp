/* 
	1 A - Make a triangle! 
	author : ltra_golu | submitted at : 2018-10-16 19:45:41
	time taken : 15 ms | memory consumed : 0 KB
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

bool func(ll a, ll b, ll c)
{
    if (a + b > c and b + c > a and a + c > b) return true;
    else return false;
}
int main()
{
    hello
    ll a, b, c; cin >> a >> b >> c;
    if (func(a, b, c)) return cout << 0, 0;
    if (a + b <= c)
    {
        return cout << c - a - b + 1, 0;
    }
    else if (a + c <= b)
        return cout << b - a - c + 1, 0;
    else return cout << a - b - c + 1, 0;
}