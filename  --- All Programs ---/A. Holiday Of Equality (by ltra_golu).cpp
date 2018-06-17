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
