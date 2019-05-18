/* 
	9 A - Mahmoud and Ehab and the even-odd game 
	author : ltra_golu | submitted at : 2018-04-03 19:13:41
	time taken : 30 ms | memory consumed : 3444 KB
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
	long int n; cin>>n;
	if (n==1) cout<<"Ehab";
	else if (n%2 == 0) cout<<"Mahmoud";
	else cout<<"Ehab";
}