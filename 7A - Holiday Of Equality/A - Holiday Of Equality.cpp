/* 
	7 A - Holiday Of Equality 
	author : ltra_golu | submitted at : 2018-03-25 15:28:36
	time taken : 31 ms | memory consumed : 3440 KB
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n; cin>>n;
	long int large = 0, sum = 0;
	vector <long int> v(n);
	for(int i=0; i<n; i++) {
		cin>>v[i];
		large = max(v[i] , large);
	}
	for(int i = 0; i < n; i++)
	{
		sum += (large - v[i]);
	}
	cout<<sum;
}
