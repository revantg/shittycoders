/* 
	4 A - Calculating Function 
	author : ltra_golu | submitted at : 2018-03-25 09:51:55
	time taken : 31 ms | memory consumed : 3280 KB
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long n; cin>>n;
	if (n % 2 == 0) cout<<n/2;
	else cout<<(-1-n)/2;
}
