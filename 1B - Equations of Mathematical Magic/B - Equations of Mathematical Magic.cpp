/* 
	1 B - Equations of Mathematical Magic 
	author : ltra_golu | submitted at : 2018-10-16 20:33:40
	time taken : 31 ms | memory consumed : 4 KB
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
    ll t; cin >> t;
    while(t--)
    {
        ll num, count = 0; cin >> num;
        std::string binary = std::bitset<8>(num).to_string();
        // for(auto c : binary)
        // {
        //     if (c == '1') count++;
        // }
        ll r;
        while (num != 0)
        {
            r = num % 2;
            // arr[i++] = r;
            if (r == 1) count++;
            num /= 2;
        }
        ll ans = pow(2, count);
        cout << ans << endl;
    }

}