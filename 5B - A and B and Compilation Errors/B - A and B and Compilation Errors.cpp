/* 
	5 B - A and B and Compilation Errors 
	author : ltra_golu | submitted at : 2018-03-30 23:24:21
	time taken : 608 ms | memory consumed : 3276 KB
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
	long int n, sum = 0, sum1 = 0; cin>>n;
	int temp;
	for(int i = 0; i < n; i++) {
		cin>>temp;
		sum += temp;
	}n--;

	for(int k = 0; k < 2; k++){
		sum1 = sum;
		for(int i = 0; i < n; i++){
			cin>>temp;
			sum1 -= temp;
		}n--;
		cout<<sum1<<endl;
		sum -= sum1;
	}

}
