/* 
	2 A - Stones on the Table 
	author : ltra_golu | submitted at : 2018-03-25 13:32:33
	time taken : 60 ms | memory consumed : 3276 KB
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, count = 0; cin>>n;
	string s; cin>>s;
	for(int i = 0; i < n; i++) {
		if (s[i] == s[i+1])
		{
			count++;
		}
	}cout<<count;
}
