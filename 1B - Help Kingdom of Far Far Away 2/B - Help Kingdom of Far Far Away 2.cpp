/* 
	1 B - Help Kingdom of Far Far Away 2 
	author : ltra_golu | submitted at : 2018-06-16 23:43:41
	time taken : 92 ms | memory consumed : 8 KB
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int n = 0, d = -1, l = s.length(), neg = 0;
    if (s[0] == '-')
        neg = 1;
    for (int i = 0; i < l; i++)
    {
        if (s[i] == '-')
            continue;
        if (s[i] == '.')
        {
            d = 0;
            continue;
        }
        if (d == -1)
            n++;
        else
            d++;
    }
    int m = n % 3, i = 0, x = n - 1;
    if (m == 0)
        m = 3;
    if (neg == 1)
    {
        cout << "($";
        i = 1;
        x = n;
    }
    else
        cout << "$";
    for (; i < x; i++)
    {
        cout << s[i];
        m--;
        if (m == 0)
        {
            cout << ",";
            m = 3;
        }
    }
    cout << s[x] << ".";
    if (x + 1 == l)
        cout << "00";
    else if (x + 3 == l)
        cout << s[x + 2] << "0";
    else
        cout << s[x + 2] << s[x + 3];
    if (neg == 1)
        cout << ")" << endl;
}