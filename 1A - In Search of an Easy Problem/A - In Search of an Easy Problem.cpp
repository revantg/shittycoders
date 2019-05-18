/* 
	1 A - In Search of an Easy Problem 
	author : ltra_golu | submitted at : 2018-09-23 16:07:09
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
#define        vii vector <pair <ll, ll> >
#define                 mii map < ll, ll >
#define        vii vector <pair <ll, ll> >
#define  hello ios::sync_with_stdio(false);

int main()
{
    hello
    ll n; cin >> n;
    ll temp, f = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> temp;
        if (temp == 1 and f == 0) cout << "HARD", f = 1;
    }
    if (f == 0) cout << "EASY";
}