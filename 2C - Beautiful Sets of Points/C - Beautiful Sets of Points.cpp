/* 
	2 C - Beautiful Sets of Points 
	author : ltra_golu | submitted at : 2018-07-24 20:43:54
	time taken : 62 ms | memory consumed : 8 KB
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m, n; cin >> m >> n;
    cout << min(m,n) + 1 << endl;
    for(int i = 0; i <= min(m,n); i++)
        cout << i << ' ' << min(m,n) - i << endl;
}