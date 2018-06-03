#include <bits/stdc++.h>
using namespace std ;
int main()
{
	int n; cin>>n;
	string s; cin>>s;
	vector <int> v(26);
	transform(s.begin(), s.end(), s.begin(), ::tolower);
	for(auto c:s){
		v[int(c) - int ('a')]++;
	}
	if (find(v.begin() , v.end() , 0) == v.end())
		cout<<"YES";
	else cout<<"NO";
	return(0);
}
