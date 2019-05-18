/* 
	5 A - Olesya and Rodion 
	author : ltra_golu | submitted at : 2018-06-21 23:31:29
	time taken : 31 ms | memory consumed : 8 KB
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, t; cin >> n >> t;
    if (t == 10)
    {
        if (n == 1) return cout << -1, 0;
        cout << 1;
        for(int i = 0; i < n - 1; i++)
            cout << 0;
    }
    else    
        for (int i = 0; i < n; i++)
            cout << t;
}