/* 
	4 C - Team 
	author : ltra_golu | submitted at : 2018-07-21 06:14:46
	time taken : 108 ms | memory consumed : 8 KB
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c1 = 0, c0 = 0;
    cin >> a >> b;
    if (b > (2 * a) + 2 or a > b + 1)
        return cout << -1, 0;

    if (b >= (2 * a))
    {
        // cout << "hello";
        while(c1 != b or c0 != a)
        {
            if (c1 + 2 <= b) cout << "11", c1 += 2;
            else if (c1 + 1 <= b) cout << "1", c1++;
            if (c0 + 1 <= a) cout << "0", c0++;

        }
    }
    else 
    {
        // cout << c0 << c1;
        while(c1 != b or c0 != a)
        {
            // cout << "Hello";
            if (c0 + 1 <= a) cout << "0", c0++;
            if (c1 + 2 <= b and b - c1 > a - c0) cout << "11", c1 += 2;
            else if (c1 != b) cout << "1", c1++;
            // int temp; cin >> temp;
            // cout << " " << a- c0 << b - c1 << endl;if (c1 + 1 <= b or a - c0 >= b - c1)
        }
        // cout << c0 << c1;
    }
}
