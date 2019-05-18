/* 
	7 A - Anton and Danik 
	author : ltra_golu | submitted at : 2018-03-25 11:15:34
	time taken : 31 ms | memory consumed : 3532 KB
*/
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
