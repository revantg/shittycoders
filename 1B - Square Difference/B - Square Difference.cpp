/* 
	1 B - Square Difference 
	author : ltra_golu | submitted at : 2018-10-07 20:46:23
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

bool check(ll n)
{
    if (n == 2)
        return true;
    for (ll i = 3; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    ll t; cin >> t;
    while (t--)
    {
        ll num1 , num2; cin >> num1 >> num2; 
        if (num1 == num2 + 1)
        {
            if (check(num1 + num2)) cout << "YES";
            else cout << "NO";
        }
        else cout << "NO";
        cout << "\n";
    }
}