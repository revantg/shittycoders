/* 
	2 B - Queue at the School 
	author : ltra_golu | submitted at : 2018-04-05 21:29:40
	time taken : 30 ms | memory consumed : 3280 KB
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
	string str;
	int n, t, tim = 0; cin>>n>>t;
	cin>>str;
	string str2 = str;
	while(tim < t){
		for(int i = 0; i < n - 1; i++)
			if (str[i] == 'B' and str[i+1] == 'G'){
				str2[i] = 'G';
				str2[i+1] = 'B';
			}str = str2;
		tim++;
	}
 	cout<<str2;
}
