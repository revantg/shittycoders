/* 
	4 A - Police Recruits 
	author : ltra_golu | submitted at : 2018-03-25 15:44:52
	time taken : 139 ms | memory consumed : 3828 KB
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
	long int n, temp; cin>>n;
	long int police = 0, crimes = 0;
	vector <int> v(n);
	for(int i = 0; i < n; i++) {
		cin>>temp;
		if (temp == abs(temp)) police+=temp;
		else {
			if (police == 0) crimes++;
			else police--;
		}
	}
	cout<<crimes;
}
