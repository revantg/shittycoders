#include <bits/stdc++.h>
using namespace std;
int main()
{
    long int m, n;
    cin >> m >> n;
    long int a[m][n], zero = 0, one = 0;
    map<int, int> row;
    map<int, int> column;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
            if (a[i][j] == 0)
            {
                zero++;
                row[i] = 1;
                column[j] = 1;
            }
            else
                one++;
        }

    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
        {
            if (a[i][j])
            {
                if (row[i] == 1 or column[j] == 1)
                {
                    cout << "NO";
                    return (0);
                }
            }
        }
    // if ((row.size() >= m or column.size() >= n) and one != 0)
    // {
    //     cout << "NO";
    //     return (0);
    // }
    cout << "YES" << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (row[i] == 1 || column[j] == 1)
                cout << "0 ";
            else
                cout << "1 ";
        }
        cout << endl;
    }
}