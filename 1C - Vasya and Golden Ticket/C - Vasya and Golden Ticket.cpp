/* 
	1 C - Vasya and Golden Ticket 
	author : ltra_golu | submitted at : 2018-09-25 12:47:24
	time taken : 31 ms | memory consumed : 300 KB
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
    ll n; cin >> n;
    string num; cin >> num;
    if (n == 1) return cout << "YES", 0;
    ll s = 0, s1 = 0, s2 = 0;
    s = 0;
    for(int i = 0; i < n - 1; i++)
    {
        if (num[i] == '0') continue;
        s += int(num[i] - '0');
        ll k = i+1;
        ll flag = 1;
        while(k < n)
        {
            s1 = 0;
            while(s1 < s and k < n)
            {
                s1 += int(num[k] - '0');
                k++;
            }
            while(num[k] == '0')k++;
            if (s1 != s) {flag = 0; break;}
        }
        if (flag == 1)
        {
            return cout << "YES", 0;
        } 
    }
    if (s == 0 and num[n - 1] == '0') return cout << "YES", 0;
    return cout << "NO", 0;
}