/* 
	1 B - Obtaining the String 
	author : ltra_golu | submitted at : 2018-07-31 18:25:28
	time taken : 46 ms | memory consumed : 160 KB
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, t, j, k;
    string q, w;
    map <char, long long> m, m2;
    vector <int> v;

    cin >> n;
    cin >> q >> w;
     
    vector <int> v1;
    for (t = 0; t < n; t++)
        m[q[t]]++;
    for (t = 0; t < n; t++)
        m2[w[t]]++;
    for (char i = 'a'; i <= 'z'; i++)
        if (m[i] != m2[i])
        {
            cout << "-1";
            return 0;
        }
    long long c = 0;
    for (t = 0; t < n; t++)
        if (q[t] != w[t])
        {
            for (j = t; j < n; j++)
            {
                if (q[j] == w[t])
                {
                    for (k = j; k > t; k--)
                    {
                        long long t = q[k - 1];
                        q[k - 1] = q[k];
                        q[k] = t;
                        v.push_back(k);
                    }
                    break;
                }
            }
        }
    cout << v.size() << endl;
    for (auto x : v)
    {
        cout << x << " ";
    }
    return 0;
}