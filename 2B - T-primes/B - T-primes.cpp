/* 
	2 B - T-primes 
	author : ltra_golu | submitted at : 2018-04-07 01:37:37
	time taken : 1934 ms | memory consumed : 3444 KB
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
	long int n; cin>>n;
	long long int num, root;
	while(n--) {
		cin>>num;
		int isPrime = 1;
		if (num != pow(int(sqrt(num)) , 2) or num == 1)
			cout<<"NO"<<endl;
		else {
			root = sqrt(num);
			if (root % 2 == 0) {
				if (root != 2 )
					cout<<"NO"<<endl;
				else
					cout<<"YES"<<endl;
			}
			else {
				for(int i = 3; i <= sqrt(root) and isPrime == 1; i+=2) {
					if (root % i == 0){
						isPrime = 0;
					}
				}
				if (isPrime == 1 or sqrt(root) < 3)
					cout<<"YES"<<endl;
				else
					cout<<"	NO"<<endl;
			}
		}
	}
}
