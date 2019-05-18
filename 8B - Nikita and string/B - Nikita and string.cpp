/* 
	8 B - Nikita and string 
	author : ltra_golu | submitted at : 2018-10-01 14:59:02
	time taken : 31 ms | memory consumed : 244 KB
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
    string s; cin >> s;
    ll mx1 = 0, mx2 = 0, mx3 = 0;
    for(auto c : s)
    {
        if (c == 'a')
        {
            mx1++;
            mx3 = max(mx2, mx3) + 1; 
        }
        else
        {
            mx2 = max(mx1, mx2) + 1;
        }
    
    }
    cout << max(mx1, max(mx2, mx3));
}