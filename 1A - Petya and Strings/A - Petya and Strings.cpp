/* 
	1 A - Petya and Strings 
	author : ltra_golu | submitted at : 2018-03-23 19:14:22
	time taken : 60 ms | memory consumed : 3276 KB
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s1, s2;	cin>>s1>>s2;
	transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
	transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
	cout<<s1.compare(s2);
}
