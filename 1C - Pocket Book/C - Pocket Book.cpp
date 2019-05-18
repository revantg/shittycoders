/* 
	1 C - Pocket Book 
	author : ltra_golu | submitted at : 2018-08-05 18:55:21
	time taken : 62 ms | memory consumed : 164 KB
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m; cin >> n >> m;
    vector <string> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    long long c = 1, mod = 1000000007;
    map <int, int> mp;
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            mp[v[j][i]]++;
        }
        c = ((c % mod) * (mp.size() % mod)) % mod;
        mp.clear();
    }
    cout << c;
}