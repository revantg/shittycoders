/* 
	9 B - Friends 
	author : ltra_golu | submitted at : 2018-07-07 02:32:43
	time taken : 31 ms | memory consumed : 0 KB
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m;
    // int v[10][10];
    vector <vector <int> > v(10, vector<int>(10));
    cin >> m;
    for (int i = 0; i < m; ++i)
    {
        int a, b;
        cin >> a >> b;
        v[a][b] = v[b][a] = 1;
    }
    for (int i = 1; i <= 5; ++i)
    {
        for (int j = 1; j <= 5; ++j)
        {
            if (i == j)
                continue;
            for (int k = 1; k <= 5; ++k)
            {
                if (k == i || k == j)
                    continue;
                if (v[i][j] == v[i][k] && v[j][k] == v[i][k])
                {
                    cout << "WIN" << endl;
                    return 0;
                }
            }
        }
    }
    cout << "FAIL" << endl;
}