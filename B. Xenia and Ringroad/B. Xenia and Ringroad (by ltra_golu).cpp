#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, m; cin>>n>>m;
	vector <int> a(m);
	int pos = 1;
	long long total = 0;
	for(int i = 0; i < m; i++) {
		cin>>a[i];
		if (a[i] < pos)
			total += (n-pos) + a[i];
		else
			total += a[i] - pos;
		pos = a[i];
	}
	cout<<total;
}
