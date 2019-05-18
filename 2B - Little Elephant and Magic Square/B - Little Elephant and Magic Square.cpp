/* 
	2 B - Little Elephant and Magic Square 
	author : ltra_golu | submitted at : 2018-04-10 00:46:11
	time taken : 62 ms | memory consumed : 3440 KB
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long int a[3][3], sum[3];
    long int d;
    for (int i = 0; i < 3; i++)
    {
        sum[i] = 0;
        for (int j = 0; j < 3; j++)
        {
            cin >> a[i][j];
            sum[i] += a[i][j];
        }
    }

    d = sum[1] - sum[0];
    int ans = -1;
    for (int i = 0; i <= 100000 and ans == -1; i++)
        if ((3 * i) - (3 * d) == a[0][2] + i - d + a[2][0])
            ans = i;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            if (i == j)
                cout << ans - (i * d) << " ";
            else
                cout << a[i][j] << " ";
        cout << endl;
    }
}
