/* 
	4 A - Jzzhu and Children 
	author : ltra_golu | submitted at : 2018-07-03 10:32:28
	time taken : 31 ms | memory consumed : 304 KB
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m; cin >> n >> m;
    int mx = 0, pos, t;
    for(int i = 0; i < n; i++)
    {
        cin >> t;
        t = (t / m) + (t % m != 0);
        if (t >= mx)
        {
            mx = t;
            pos = i;
        }
    }
    cout << pos + 1;
}
