/* 
	5 A - Bear and Elections 
	author : ltra_golu | submitted at : 2018-06-19 00:34:36
	time taken : 31 ms | memory consumed : 8 KB
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, mx = 0, count = 0, val; cin >> n;
	vector <int> v(n); cin >> val;
	for(int i = 0; i < n - 1; i++)
		cin >> v[i];
	// int val = v[0];
	sort(v.begin(), v.end());
	// for(int i = n - 1; i > 0 and val <= v[i - 1]; i--){
	while(val <= v[n - 1]){
		int i = n - 1;
		while(val <= v[i]) {
			
			count++, val++, v[i]--;
			sort(v.begin(), v.end());
		}
		// cout << val << " , " << i << " - " << v[i] << " = " << count <<endl;
		
	}
	cout << count;
}