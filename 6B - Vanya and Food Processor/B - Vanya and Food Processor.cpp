/* 
	6 B - Vanya and Food Processor 
	author : ltra_golu | submitted at : 2018-09-29 15:41:10
	time taken : 46 ms | memory consumed : 788 KB
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
    ll n, h, k; cin >> n >> h >> k;
    vi v(n);
    for(int i = 0; i < n; i++)
        cin >> v[i];
    ll z = 0, sum = 0, c = 0;
    while(z < n)
    {
        while (sum + v[z] <= h and z < n)
        {
            sum += v[z];
            c += (sum / k);
            sum %= k;
            z++;
        }
        // cout << z << " - " << sum << endl;
        if (sum != 0)
            c++;
        sum = 0;
    }cout << c;
}