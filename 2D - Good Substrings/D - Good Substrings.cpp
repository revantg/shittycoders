/* 
	2 D - Good Substrings 
	author : ltra_golu | submitted at : 2018-09-27 08:38:36
	time taken : 1622 ms | memory consumed : 35408 KB
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
    string s2; cin >> s2;
    ll k; cin >> k;
    set <ll int> st;
    map <char, int> m;

    for(int i = 0; i < s2.length(); i++)
        m['a' + i] = s2[i] - '0';

    for(ll i = 0; i < s.length(); i++)
    {
        long long int ha = 0;
        ll c = 0;
        for(ll j = i; j < s.length(); j++)
        {
            if (m[s[j]] == 0) c++;
            if (c > k) break;
            ha = (ha * 131) + (s[j] - 'a' + 1);
            st.insert(ha);
        }
    }
    cout << st.size();
    // ll k; cin >> k;
    // ll num = 101, hash = 0, z = 0;
    // ll c = 0, count = 0;
    // for(int i = 0; i < k; i++)
    // {
    //     hash += pow(s[i], z++);
    //     if (m[s[i]] == 1) c++;
    // }
    // if (c <= k) count++;
    
    // z = 0;
    // map <ll, ll> mp;

    // for(int i = 0; i < s.length(); i++)
    // {
    //     if (m[s[i]] == 1) z++;
    //     v[i] = z;
    // }

    // for(int i = k; i < s.length(); i++)
    // {
    //     hash -= s[i - s.length()];
    //     hash /= num;
    //     hash += pow(s[i], s.length() - 1);


    // }
    
}