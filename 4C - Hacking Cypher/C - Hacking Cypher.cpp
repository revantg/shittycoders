/* 
	4 C - Hacking Cypher 
	author : ltra_golu | submitted at : 2018-08-01 21:49:52
	time taken : 202 ms | memory consumed : 6848 KB
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s; cin >> s;
    long long r = 0, l = 0, a, b; cin >> a >> b;
    vector <int> v(s.length());
    for(int i = 0; i < s.length(); i++)
    {
        l = (l * 10) + (s[i] - '0');
        l %= a;
        if (l == 0)
            v[i] = 1;
    }
    long long sz = 1;
    for(int j = s.length() - 1; j >= 1; j--)
    {
        r = ((s[j] - '0') * sz ) + r; 
        r %= b;   
        sz *= 10;
        sz %= b;
        if (r == 0 and s[j] - '0' != 0 and v[j - 1] == 1)
            return cout << "YES\n" << s.substr(0, j) << '\n' << s.substr(j, s.size() - j), 0;
    }
    cout << "NO";
}