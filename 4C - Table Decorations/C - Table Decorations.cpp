/* 
	4 C - Table Decorations 
	author : ltra_golu | submitted at : 2018-07-23 05:34:33
	time taken : 15 ms | memory consumed : 12 KB
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long a[3], b, c, i, j, k;
    cin >> a[0] >> a[1] >> a[2];
    sort(a, a + 3);
    k = min((a[0] + a[1] + a[2]) / 3, a[0] + a[1]);
    cout << k << endl;
}