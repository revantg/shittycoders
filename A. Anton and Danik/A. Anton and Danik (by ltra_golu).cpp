#include<algorithm>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	long int n; cin>>n;
	string s; cin>>s;
	int A = count(s.begin(), s.end(), 'A');
	int B = s.length() - A;
	if (A > B) cout<<"Anton";
	else if (A < B) cout<<"Danik";
	else cout<<"Friendship" ;
}
