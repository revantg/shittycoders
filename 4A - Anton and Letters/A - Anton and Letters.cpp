/* 
	4 A - Anton and Letters 
	author : ltra_golu | submitted at : 2018-03-25 16:47:10
	time taken : 30 ms | memory consumed : 3444 KB
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s; getline(cin, s); s.erase(0,1); s.erase(s.length()-1,1);
	string::size_type i = s.find(",");
	string::size_type j = s.find(" ");
	set <char> se;
	for( char c:s) se.insert(c);
	int length = se.size();
	if (i != string::npos) length--;
	if (j != string::npos) length--;
	cout<<length;
}
