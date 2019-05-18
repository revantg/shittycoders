/* 
	7 A - Bachgold Problem 
	author : ltra_golu | submitted at : 2018-03-29 00:16:12
	time taken : 31 ms | memory consumed : 3552 KB
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
	long int n; cin>>n;
	cout<<n/2<<endl;
	for(int i = 0; i < ((n % 2) ? (n/2)-1 : n/2 ); i++) cout<<"2 ";
	if (n % 2) cout<<"3";
}
