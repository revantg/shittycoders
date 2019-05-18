/* 
	4 C - k-Tree 
	author : ltra_golu | submitted at : 2018-07-31 01:04:58
	time taken : 31 ms | memory consumed : 8 KB
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long
const int mod = 1e9 + 7;
int32_t main()
{
    int n, k, d;
    cin >> n >> k >> d;
    int dp[n + 1][2];
    dp[0][0] = 1, dp[0][1] = 0;
    for (int i = 1; i <= n; i++)
    {
        dp[i][0] = 0;
        for (int j = 1; j <= min(i, d - 1); j++)
            dp[i][0] = (dp[i][0] + dp[i - j][0]) % mod;
        dp[i][1] = 0;
        for (int j = d; j <= min(i, k); j++)
            dp[i][1] = (dp[i - j][0] + dp[i][1]) % mod;
        for (int j = 1; j <= min(i, k); j++)
            dp[i][1] = (dp[i - j][1] + dp[i][1]) % mod;
    }
    cout << dp[n][1];
}