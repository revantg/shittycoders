/* 
	9 A - Chips 
	author : ltra_golu | submitted at : 2018-03-26 06:48:06
	time taken : 30 ms | memory consumed : 3276 KB
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, chips; cin>>n>>chips;
	for(int i = 1; chips >= i; i++)
	{
		chips -= i;
		if (i == n) i = 0;
	}
	cout<<chips;

}
