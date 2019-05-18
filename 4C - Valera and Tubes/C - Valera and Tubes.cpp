/* 
	4 C - Valera and Tubes 
	author : ltra_golu | submitted at : 2018-07-31 01:55:44
	time taken : 62 ms | memory consumed : 4 KB
*/
#include <bits/stdc++.h>
using namespace std;
int m, n, k;
int dfs()
{
    int x = 1, y = 1, dir = 1, c = 0, f = 0 ;
    if (k != 1)
        cout << 2 << " ";
    if (k == 1)
        cout << m * n << " " ,f = 1;
    while(c != m * n)
    {
        cout << x << " " << y << " ";
        y += dir;
        c++;
        if (c == ((k - 1) * 2) and f == 0) cout << "\n" << (m * n) - (2 * (k - 1)) << " ", f = 1;
        else if (c % 2 == 0 and f == 0) cout << "\n" << 2 << " ";
        if (y == m+1) x++, dir = -1, y = m;
        else if (y == 0) x++, dir = 1, y = 1;
    }
    return (0);
}
int main()
{
    cin >> n >> m >> k;
    dfs();
}
