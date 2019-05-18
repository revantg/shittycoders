/* 
	2 A - Dubstep 
	author : ltra_golu | submitted at : 2018-03-25 15:17:45
	time taken : 62 ms | memory consumed : 3444 KB
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
	string str; cin>>str;
	std::string::size_type i = str.find("WUB");
	while (i != std::string::npos) {
		if (i == 0) str.erase(i, 3);
		else str.replace(i, 3, " ");
		i = str.find("WUB", i);
	}
	i = str.find("  ");
	while (i != std::string::npos) {
		str.replace(i, 2, " ");
		i = str.find("  ", i);
	}
	cout<<str;
}
