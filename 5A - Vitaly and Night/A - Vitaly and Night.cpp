/* 
	5 A - Vitaly and Night 
	author : ltra_golu | submitted at : 2018-06-21 23:18:37
	time taken : 31 ms | memory consumed : 8 KB
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, t1, t2, count = 0; cin >> n >> m;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < (2*m); j+=2)
        {
            cin >> t1 >> t2;
            count += ((t1 + t2) > 0);
        }
    }
    cout << count;
}