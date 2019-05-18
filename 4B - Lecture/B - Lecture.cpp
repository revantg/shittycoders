/* 
	4 B - Lecture 
	author : ltra_golu | submitted at : 2018-03-30 23:53:47
	time taken : 46 ms | memory consumed : 3628 KB
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n , m; cin>>n>>m;
	map <string , string> str;
	string temp1, temp2;
	while(m--){
		cin>>temp1>>temp2;
		str[temp1] = (temp1.length() > temp2.length()) ? temp2 : temp1;
	}
	while(n--){
		cin>>temp1;
		cout<<str[temp1]<<" ";
	}
}
