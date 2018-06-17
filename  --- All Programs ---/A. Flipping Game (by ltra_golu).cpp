#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n; cin>>n;
	vector<int> v(n), z;
	int zero_count = 0, large = 0, pos = 0;
	for(int i=0; i<n; i++)
	{
		cin>>v[i];
		if (v[i]==0) zero_count++;
		if (zero_count > large) {
			large = zero_count;
			pos = i;
		}
		if (v[i] == 1) zero_count = 0;
	}

}
