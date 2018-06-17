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
	cout<<(sum/k) + (sum%k);
}
