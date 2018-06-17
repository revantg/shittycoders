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
