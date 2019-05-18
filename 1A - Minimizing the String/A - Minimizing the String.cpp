/* 
	1 A - Minimizing the String 
	author : ltra_golu | submitted at : 2018-11-13 07:19:46
	time taken : 62 ms | memory consumed : 500 KB
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main ()
{
	ll n; cin >> n;
	string s; cin >> s;
	ll f = 1;
	for(int i = 0; i < n - 1; i++)
	{
		if (s[i] > s[i + 1] and f)
			{f= 0; continue;}
		cout << s[i];
	}
	if (f == 0) cout << s[n-1];
}