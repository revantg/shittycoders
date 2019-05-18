/* 
	4 C - Palindrome Transformation 
	author : ltra_golu | submitted at : 2018-07-31 02:48:25
	time taken : 31 ms | memory consumed : 1028 KB
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, p, k = 0, c = 0; cin >> n >> p;
	string s; cin >> s;
	vector <int> v(n);
	vector <int> ar;
	for(auto c : s)v[k++] = c - 'a' + 1;
	if (p >= (n+1) / 2) p = n - p + 1;
	for(int i = 0; i < n / 2; i++)
	{
		c += min(abs(v[i] - v[n - i - 1]), 26 - abs(v[i] - v[n - i - 1]));
		if (v[i] != v[n - i - 1]) ar.push_back(i);
	}
	// cout << c;
	if (c == 0) return cout << 0, 0;
	int l = ar[0] + 1, r = ar[ar.size() - 1] + 1;
	//  cout << l << r << " \n";
	c += min(abs(l - p), abs(r - p)) + (r - l);
	cout << c;
}
