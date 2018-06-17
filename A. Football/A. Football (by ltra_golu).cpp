#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str; cin>>str;
	if(str.find("0000000")!=string::npos or str.find("1111111")!=string::npos) cout<<"YES";
	else cout<<"NO";
}
