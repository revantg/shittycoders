/* 
	1 A - Testing Pants for Sadness 
	author : ltra_golu | submitted at : 2018-07-13 03:49:22
	time taken : 62 ms | memory consumed : 0 KB
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, x, sum = 0; cin >> n;
    for(int i = 1; i <= n; i++)
        cin >> x, sum += (x - 1) * i;
    cout << sum + n;
}