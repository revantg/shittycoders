/* 
	4 A - Vanya and Cubes 
	author : ltra_golu | submitted at : 2018-10-01 14:32:10
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
    ll num; cin >> num;
    ll sum = 0, c = 0, k = 1;
    while(sum < num)
    {
        sum += k * (k + 1) / 2;
        k++;    
        c++;
    }
    if (sum > num)c--;
    cout << c;

}