/* 
	1 A - Twins 
	author : ltra_golu | submitted at : 2018-03-25 10:21:03
	time taken : 62 ms | memory consumed : 3280 KB
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n; cin>>n;
	long int tot_sum = 0, my_sum = 0;
	vector <int> v(n);
	for(int i = 0; i < n; i++) {
		cin>>v[i];
		tot_sum += v[i];
	}
	sort(v.begin(), v.end(), greater<int>());
	int i=0;
	while(my_sum <= tot_sum - my_sum)
		my_sum += v[i++];
	cout<<i;

}
