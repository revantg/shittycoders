#include <bits/stdc++.h>
using namespace std;
int main()
{
	long int k; cin>>k;
	long int temp = 19, count = 0, sum, a;
	while(count != k){
		sum = 0;
		a = temp;
		while(a != 0){
			sum += a % 10;
			a /= 10;
		}
		if (sum == 10) count++;
		temp++;
	}cout<<temp-1;

}
