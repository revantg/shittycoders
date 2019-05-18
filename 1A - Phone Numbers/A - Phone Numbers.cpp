/* 
	1 A - Phone Numbers 
	author : ltra_golu | submitted at : 2018-10-06 16:48:46
	time taken : 31 ms | memory consumed : 12 KB
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
    string s; cin >> s;
    vector <ll> v(10);
    set <int> st;
    for(auto c : s)
    {
        v[c - '0']++;
        st.insert(c - '0');
    }
    cout << min(v[8], n / 11);
}