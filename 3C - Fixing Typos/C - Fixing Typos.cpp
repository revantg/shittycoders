/* 
	3 C - Fixing Typos 
	author : ltra_golu | submitted at : 2018-07-31 03:37:52
	time taken : 61 ms | memory consumed : 988 KB
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s, s2, s3; cin >> s;
	int i  = 0;
	while(i < s.size())
	{
		int k = i;
		while(s[k] == s[k + 1]) k++;
		if (k - i >= 2) s2 += s[k], s2 += s[k];
		else if (k - i == 1)s2 += s[k], s2 += s[k];
		else s2 += s[k];
		i = k;
		k = 0;
		i++;
	}
	i = 0;
	while(i < s2.length())
	{
		int k = i;
		if (k + 3 < s2.size() and s2[k] == s2[k+1] and s2[k + 2] == s2[k + 3])
			s3 += s2.substr(k, 3), k+=3;
		else
			s3 += s2[k];
		i = k;
		i++;
	}
	cout <<s3;

}
