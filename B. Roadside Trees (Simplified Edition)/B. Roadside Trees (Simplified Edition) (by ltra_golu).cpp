#include <bits/stdc++.h>
using namespace std;
int main()
{
	long int n; cin>>n;
	vector <int> v(n);
	int height = 0;
	long int total = 0;
	for(int i = 0; i < n; i++) cin>>v[i];
	for(int i = 0; i < n -1; i++) {
		if (height == 0){
			total += v[i] + 1;
			height += v[i];
		}
		else {
			total += v[i] - height + 1;
			height = v[i];
		}
		if (v[i+1] >= height){
			total += 1;
		}
		else {
			height = v[i+1];
			total += v[i] - v[i+1] + 1;
		}
	}
	total += v[n-1] - height + 1;
	cout<<total;
}
