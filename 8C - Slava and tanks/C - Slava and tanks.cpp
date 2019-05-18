/* 
	8 C - Slava and tanks 
	author : ltra_golu | submitted at : 2018-10-01 15:15:54
	time taken : 31 ms | memory consumed : 0 KB
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
    if (num % 2 == 0)
    {
        ll ans = (num / 2) * 3 ;
        cout << ans << endl;
        for(int i = 1; i <= num; i+=2)
            cout << i << " ";

        for(int i = 2; i <= num; i+=2)
            cout << i << " ";

        for (int i = 1; i <= num; i += 2)
            cout << i << " ";
    }
    else
    {
        ll ans = (num - 1) + (num + 1) / 2;
        cout << ans << endl;

        for (int i = 2; i <= num; i += 2)
            cout << i << " ";

        for (int i = 1; i <= num; i += 2)
            cout << i << " ";

                    for (int i = 2; i <= num; i += 2)
            cout << i << " ";

    }
}