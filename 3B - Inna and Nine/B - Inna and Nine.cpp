/* 
	3 B - Inna and Nine 
	author : ltra_golu | submitted at : 2018-07-12 05:53:42
	time taken : 31 ms | memory consumed : 1032 KB
*/
#include <bits/stdc++.h>
using namespace std;
string s;
int b[int(2e5) + 5];
int main()
{
    cin >> s;
    if (s.size() == 1) return cout << 1, 0;
    for (long long i = 0; i < s.size() + 1; ++i)
        if (int(s[i]) + int(s[i+1]) - '0' == '9')
            b[i] = 1;
    long long ans = 0, cur = 0;
    for (int i = 0; i < s.size(); ++i)
        if (b[i])
        {
            ++cur;
        }
        else
        {
            if (cur && cur % 2 == 0)
            {
                if (ans == 0)
                    ans += (cur / 2) + 1;
                else
                    ans *= (cur / 2) + 1;
            }
            cur = 0;
        }
    if (!ans) ans++;
    cout << ans;
    return 0;
}