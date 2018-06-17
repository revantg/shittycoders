#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int n, m; cin>>n>>m;
	long long min = ((n/m + 1) * (n/m) * (n%m) / 2) + ( (m - (n%m)) * (n/m) * (n/m - 1) / 2);
	long long max = (n-m+1) * (n-m) / 2;
	cout<<min<<" "<<max;
}
