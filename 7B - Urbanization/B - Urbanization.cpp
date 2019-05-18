/* 
	7 B - Urbanization 
	author : ltra_golu | submitted at : 2018-10-03 23:20:23
	time taken : 62 ms | memory consumed : 800 KB
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
    ll n, n1, n2; cin >> n >> n1 >> n2;
    vi v(n);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    if (n2 > n1) swap(n1, n2);
    sort(v.begin(), v.end());
    ll s1 = 0, s2 = 0;
    for(int i = n - n1 - n2; i < n - n2; i++)
    {
        s1 += v[i];
    }
    long double m1 = (long double)s1 / (long double)n1;
    for(int i = n - n2; i < n; i++)
    {
        s2 += v[i];
    }
    long double m2 = (long double)s2 / (long double)n2;
    printf("%.9Lf", m1 + m2);
}