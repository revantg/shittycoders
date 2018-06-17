#include <bits/stdc++.h>
using namespace std;
int main()
{
	string n; cin>>n;
	int m; cin>>m;
	int count = 0;
	for(string::iterator it = n.end()--; it!=n.begin() && m; it--)
	{
		if (*it != '0') count++;
		else m--;
	}
	int temp = (count < n.length() and m == 0) ? count-1 : n.length()-1;
	cout<<temp;
}
