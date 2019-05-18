/* 
	3 B - Xenia and Ringroad 
	author : ltra_golu | submitted at : 2018-04-05 21:43:31
	time taken : 280 ms | memory consumed : 3680 KB
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, m; cin>>n>>m;
	vector <int> a(m);
	int pos = 1;
	long long total = 0;
	for(int i = 0; i < m; i++) {
		cin>>a[i];
		if (a[i] < pos)
			total += (n-pos) + a[i];
		else
			total += a[i] - pos;
		pos = a[i];
	}
	cout<<total;
}
