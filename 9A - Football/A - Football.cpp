/* 
	9 A - Football 
	author : ltra_golu | submitted at : 2018-03-24 12:35:36
	time taken : 62 ms | memory consumed : 3564 KB
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str; cin>>str;
	if(str.find("0000000")!=string::npos or str.find("1111111")!=string::npos) cout<<"YES";
	else cout<<"NO";
}
