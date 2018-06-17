#include <bits/stdc++.h>
using namespace std;
int main()
{
	long int n; cin>>n;
	vector <int> a(n);
	for(int i = 0; i < n; i++) cin>>a[i];

	sort(a.begin(), a.end());
	int temp = a[0] + a[1];

	for(int i = 2; i < n; i++)
		if (temp > a[i]) {
			cout<<"YES";
			return(0);
		}
		else
			temp = a[i] + a[i-1];
	cout<<"NO";
}
