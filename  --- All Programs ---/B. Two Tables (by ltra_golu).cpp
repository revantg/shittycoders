#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m1, n1, m2, n2;
    cin >> m1 >> n1;
    int a[m1][n1];
    char t;
    for (int i = 0; i < m1; i++)
        for (int j = 0; j < n1; j++)
        {
            cin >> t;
            a[i][j] = int(t) - 48;
        }
    cin >> m2 >> n2;
    int b[m2][n2];
    for (int i = 0; i < m2; i++)
        for (int j = 0; j < n2; j++)
        {
            cin >> t;
            b[i][j] = int(t) - 48;
        }

    int mx = 0, x1 ,y1;
    // cout << "hey";
    // return (0);
    for (int x = -51; x < 51; x++)
    {
        for (int y = -51; y < 51; y++)
        {
            int sum = 0;
            for (int i = 0; i < m1; i++)
            {
                for (int j = 0; j < n1; j++)
                {
                    if (i + x < m2 and j + y < n2 and i < m1 and j < n1 and i + x >= 0 and j + y >=0 and i >= 0 and j >= 0)
                        sum += (a[i][j] * b[i + x][j + y]);
                }
                // cout << sum << endl;
            }
            if (sum >= mx) x1 = x, y1 = y, mx = sum;
        }
    }
    cout << x1 << " " << y1;
}