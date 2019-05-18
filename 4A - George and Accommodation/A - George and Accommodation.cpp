/* 
	4 A - George and Accommodation 
	author : ltra_golu | submitted at : 2018-07-03 10:23:16
	time taken : 31 ms | memory consumed : 300 KB
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;
    int a, b, count = 0;
    while(n--)
    {
        cin >> a >> b;
        if (b - a >= 2) count++;
    }
    cout << count;
}