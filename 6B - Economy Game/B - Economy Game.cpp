/* 
	6 B - Economy Game 
	author : ltra_golu | submitted at : 2018-04-01 20:48:08
	time taken : 30 ms | memory consumed : 3280 KB
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
	long int temp; cin>>temp;
	int f1 = 1234567, f2 = 123456, f3 = 1234;
	for(int i = 0; i <= temp / f1; i++) {
		for(int j = 0; j <= (temp-(i * f1)) / f2; j++) {
			if ((temp - (i*f1) - (j*f2)) % f3 == 0){
				cout<<"YES";
				return(0);
			}
		}
	}
	cout<<"NO";
}
