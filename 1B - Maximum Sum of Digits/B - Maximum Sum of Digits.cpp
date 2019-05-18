/* 
	1 B - Maximum Sum of Digits 
	author : ltra_golu | submitted at : 2018-10-06 16:31:28
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
    ll n; cin >> n;
    ll a = 0, sum = 0;
    while(a <= n)
    {
        if (a * 10 + 9 <= n){
            a = (a*10) + 9;
            sum += 9;
        }
        else break;
    }
    ll rem = n - a;
    while(rem > 0)
    {
        sum += rem%10;
        rem /= 10;
    }
    cout << sum;
}