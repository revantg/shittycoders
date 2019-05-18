/* 
	6 A - Summer Camp 
	author : ltra_golu | submitted at : 2018-10-02 00:23:21
	time taken : 30 ms | memory consumed : 16 KB
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
    string s;
    for(int i = 1; i <= 500; i++)
        s += to_string(i);
        // , cout << i << " ";

    // for(int i = 100; i <= 199; i++)
    //     s+=to_string(i);
    //     // , cout << i << " ";
    // // return 0;
    // for(int i = 1000; i <= 1999; i++)
    //     s+=to_string(i);
    // for(auto c : s) cout << c;
    // return 0;
    ll n; cin >> n;
    cout << s[n-1] ;

}