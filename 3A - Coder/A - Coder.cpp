/* 
	3 A - Coder 
	author : ltra_golu | submitted at : 2018-03-25 13:49:42
	time taken : 62 ms | memory consumed : 3272 KB
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n; cin>>n;
	cout<<(n*n)/2 + n%2<<endl;
	for(int i = 0; i < n; i++){
		for (int j = 0; j < n; j++)
		 	if ((i+j)%2 == 0) cout<<"C";
			else cout<<".";
		cout<<endl;
	}
}
