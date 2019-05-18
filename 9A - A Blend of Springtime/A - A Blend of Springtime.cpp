/* 
	9 A - A Blend of Springtime 
	author : ltra_golu | submitted at : 2018-06-11 16:53:05
	time taken : 30 ms | memory consumed : 8 KB
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    if (s.length() == 2) {cout<<"NO";return(0);}
    for (int i = 1; i < s.length() - 1; i++)
    {
        if (s[i] == 'A')
        {
            if ((s[i - 1] == 'B' and s[i + 1] == 'C') or (s[i - 1] == 'C' and s[i + 1] == 'B'))
            {
                cout << "YES";
                return (0);
            }
        }
        if (s[i] == 'B')
        {
            if ((s[i - 1] == 'A' and s[i + 1] == 'C') or (s[i - 1] == 'C' and s[i + 1] == 'A'))
            {
                cout << "YES";
                return (0);
            }
        }
        if (s[i] == 'C')
        {
            if ((s[i - 1] == 'A' and s[i + 1] == 'B') or (s[i - 1] == 'B' and s[i + 1] == 'A'))
            {
                cout << "YES";
                return (0);
            }
        }
    }
    cout << "NO";
}