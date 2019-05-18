/* 
	7 A - Pupils Redistribution 
	author : ltra_golu | submitted at : 2018-10-03 18:48:28
	time taken : 31 ms | memory consumed : 304 KB
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
    ll n, temp, s = 0; cin >> n;
    vi v1(6), v2(6);
    for(int i = 0; i < n; i++) 
    {
        cin >> temp;
        v1[temp]++;
    }
    for(int i = 0; i < n; i++) 
    {
        cin >> temp;
        v2[temp]++;
    }
    for(int i = 1; i < 6; i++)
    {
        if ((v1[i] + v2[i]) % 2 == 1) return cout << "-1", 0;
        s += abs(v1[i] - v2[i]) / 2;
    }
    cout << s / 2;
}