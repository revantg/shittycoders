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
            for (int j = 1; j <= n; j++)
                v[j][i] = 0, v[i][j] = 0;
        }
        flag = tempflag;
        if (flag == 1)
            fcount++;
    }
    cout << fcount;
}