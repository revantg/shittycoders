#include <bits/stdc++.h>
using namespace std;
int main()
{
	long int n; cin>>n;
	long int large = 0;
	vector <int> v(n);
	vector <int> answer(n);
	for(int i = 0; i < n; i++) {
		cin>>v[i];
	}
	for(int i = n-1; i >= 0; i--){
		if (v[i] > large){
			answer[i] = 0;
			large = v[i];
		}
		else
			answer[i] = large - v[i] + 1;
	}
	for(auto i : answer) cout<<i<<" ";
}
