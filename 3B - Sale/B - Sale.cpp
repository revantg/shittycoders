/* 
	3 B - Sale 
	author : ltra_golu | submitted at : 2018-04-03 22:43:52
	time taken : 62 ms | memory consumed : 3280 KB
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, m, temp; cin>>n>>m;
	int sum = 0;
	vector <int> v(n);
	for(int i = 0;i < n; i++){
		cin>>v[i];
	}
	sort(v.begin(), v.end());
	vector <int> ::iterator it = v.begin();
	for(int i = 0; i < m; i++)
	{
		if (*it > 0) break;
		sum += *it;
		it++;
	}
	cout<<sum*-1;
}
