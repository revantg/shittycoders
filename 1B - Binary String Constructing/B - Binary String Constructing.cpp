/* 
	1 B - Binary String Constructing 
	author : ltra_golu | submitted at : 2018-07-03 19:58:00
	time taken : 31 ms | memory consumed : 296 KB
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, x, i, j, k;
    cin >> a >> b >> x;
    int n = (a + b);

    vector<char> v;
    if (x % 2 == 1)
    {
        x = (x + 1) / 2;

        while (x--)
        {
            v.push_back('0');
            v.push_back('1');
        }
    }
    else
    {
        x = x / 2;

        if (a > b)
        {
            v.push_back('0');
            while (x--)
            {
                v.push_back('1');
                v.push_back('0');
            }
        }
        else
        {
            v.push_back('1');
            while (x--)
            {
                v.push_back('0');
                v.push_back('1');
            }
        }
    }
    int m = 0, p = 0;
    for (auto x : v)
    {
        if (x == '1')
            m++;
        if (x == '0')
            p++;
    }
    // cout<<m<<" "<<p<<" ";
    a = a - p;
    b = b - m;

    for (i = 0; i < v.size(); i++)
    {
        cout << v[i];
        if (v[i] == '1')
        {
            while (b > 0)
            {
                cout << "1";
                b--;
            }
            while (a > 0)
            {
                cout << "0";
                a--;
            }
        }
        else
        {
            while (a > 0)
            {
                cout << "0";
                a--;
            }
            while (b > 0)
            {
                cout << "1";
                b--;
            }
        }
    }
}