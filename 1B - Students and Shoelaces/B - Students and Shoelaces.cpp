/* 
	1 B - Students and Shoelaces 
	author : ltra_golu | submitted at : 2018-06-16 22:41:13
	time taken : 62 ms | memory consumed : 292 KB
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int l, n, a, b, flag = 1;
    cin >> n >> l;
    vector<vector<int>> v(n + 1, vector<int>(n + 1));
    vector<pair<int, int>> g(n + 1);
    for (int i = 0; i < l; i++)
    {
        cin >> a >> b;
        g.push_back(make_pair(a, b));
        v[a][b] = v[b][a] = 1;
    }
    int k = 0, fcount = 0;
    // cout << endl
    //      << endl;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //         cout << v[i][j] << " ";
    //     cout << endl;
    // }
    while (flag == 1)
    {
        int tempflag = 0;
        vector<int> vr;
        for (int i = 1; i <= n; i++)
        {
            int count = 0;
            for (int j = 1; j <= n; j++)
                if (v[i][j] == 1)
                    count++;
            if (count == 1)
                vr.push_back(i), tempflag = 1;
        }
        for (int i : vr)
        {
            // cout << "Deleting " << i << endl;
            for (int j = 1; j <= n; j++)
                v[j][i] = 0, v[i][j] = 0;
        }
        // for (int i = 1; i <= n; i++)
        // {
        //     for (int j = 1; j <= n; j++)
        //         cout << v[i][j] << " ";
        //     cout << endl;
        // }
        // cout << endl;
        flag = tempflag;
        if (flag == 1)
            fcount++;
    }
    // cout << endl
    //      << "Final - " << endl;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //         cout << v[i][j] << " ";
    //     cout << endl;
    // }
    cout << fcount;
}