/* 
	1 C - Oh Those Palindromes 
	author : ltra_golu | submitted at : 2018-10-16 20:40:14
	time taken : 31 ms | memory consumed : 396 KB
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
    ll num; cin >> num;
    string s; cin >> s;
    unordered_map <char, ll> m;
    for (auto c : s)
    {
        m[c]++;
    }
    for(char i = 'a'; i <= 'z'; i++)
    {
        string ans(m[i], i);
        cout << ans;
    }
}