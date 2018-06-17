#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, count = 0; cin>>n;
	vector <int> a(n);
	vector <int> b(n);
	vector <int> fa(6);
	vector <int> fb(5);

	for(int i = 0; i < n; i++){
		cin>>a[i];
		fa[a[i]]++;
	}
	for(int i = 0; i < n; i++){
		cin>>b[i];
		fb[b[i]]++;
	}

	for(int i = 1; i < 6; i++)
	{
		if ((fa[i] + fb[i]) % 2 != 0) {cout<<"-1"; return(0);}
		count += (( max(fa[i] , fb[i]) - min(fa[i] , fb[i]) ) / 2);
		// cout<<fa[i]<<" "<<fb[i]<<endl;
	}
	cout<<count/2;
	return(0);
}
