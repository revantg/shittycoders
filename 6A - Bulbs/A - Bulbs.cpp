/* 
	6 A - Bulbs 
	author : ltra_golu | submitted at : 2018-03-25 10:03:33
	time taken : 15 ms | memory consumed : 3416 KB
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int m, total_bulbs; cin>>m>>total_bulbs;
	int n, temp;
	set <int> s;
	while(m--)
	{
		cin>>n;
		while(n--){	cin>>temp; s.insert(temp); }
	}
	if (s.size() == total_bulbs) cout<<"YES";
	else cout<<"NO";
}
