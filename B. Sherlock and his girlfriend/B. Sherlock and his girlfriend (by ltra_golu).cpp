#include <bits/stdc++.h>
using namespace std;
int isPrime(long int a)
{
	if ( a % 2 == 0) return(0);
	for(int i = 3; i <= sqrt(a); i+=2)
		if (a % i == 0) return(0);
	return(1);

}
int main()
{
	long int n; cin>>n;
	vector <int> v(n);
	iota( begin(v), end(v), 2);
	for (int i = 0; i < n; i++) cout<<v[i];
}
