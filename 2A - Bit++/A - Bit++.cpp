/* 
	2 A - Bit++ 
	author : ltra_golu | submitted at : 2018-03-25 10:27:56
	time taken : 30 ms | memory consumed : 3276 KB
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, x = 0; cin>>n;
	string s;
	while(n--){
		cin>>s;
		if (s[0] == '+') ++x;
		else if (s[0] == '-') --x;
		else if (s[2] == '+') x++;
		else if (s[2] == '-') x--;
	}
	cout<<x;
}
