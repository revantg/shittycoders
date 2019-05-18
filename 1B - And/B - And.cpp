/* 
	1 B - And 
	author : ltra_golu | submitted at : 2018-07-31 04:10:30
	time taken : 233 ms | memory consumed : 4920 KB
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, x; cin >> n >> x;
	vector <int> v(n);
	vector <int> v2(n);
	map <int, int> m;
	map <int, int> m2;
	for(int i = 0; i < n; i++)
	{
		cin >> v[i], m[v[i]]++;
		if (m[v[i]] > 1) return cout << 0, 0;
	}
	for(int i = 0; i < n; i++){
		m[v[i]]--;
		if (m[v[i] & x] >= 1) return cout << 1, 0;
		m[v[i]]++;
	}
	for(int i = 0; i < n; i++)
	{
		m2[v[i] & x]++;
		if (m2[v[i] & x] > 1) return cout << 2, 0;
	}
	cout << -1;
}
