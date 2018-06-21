#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, k, count = 0; cin >> n >> k;
	vector <int> v(n);
	for(int i = 0; i < n; i++)
		cin >> v[i];
	for(int i = 1; i < n; i++)
		if (v[i] - v[i-1] != k)
		{
			if (v[i+1] - v[i-1] == (2*k) )
				v[i] = v[i+1] - k;
			else 
				v[i-1] = v[i] - k;
			count++;
		}
	cout << count;
}