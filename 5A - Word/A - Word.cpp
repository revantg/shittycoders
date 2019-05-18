/* 
	5 A - Word 
	author : ltra_golu | submitted at : 2018-03-29 00:25:50
	time taken : 30 ms | memory consumed : 3552 KB
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s; cin>>s;
	int upper = 0, lower = 0;
	for( char c : s){
		if (int(c) >= 65 and int(c) <= 90) upper++; else lower++;
	}
	if (lower >= upper) transform(s.begin(), s.end(), s.begin(), ::tolower);
	else transform(s.begin(), s.end(), s.begin(), ::toupper);
	cout<<s;
}
