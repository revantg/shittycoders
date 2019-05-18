/* 
	4 A - Vanya and Cards 
	author : ltra_golu | submitted at : 2018-03-23 19:41:22
	time taken : 31 ms | memory consumed : 3280 KB
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, k; cin>>n>>k;
	long int sum = 0;
	std::vector<int> v(n);
	for(int i=0; i<n; i++) {
		cin>>v[i];
		sum += v[i];
	}
	if (sum%k) cout<<abs(sum)/k + 1;
	else cout<<abs(sum)/k;
}
