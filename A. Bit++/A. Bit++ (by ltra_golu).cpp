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
	} cout<<x;
}
