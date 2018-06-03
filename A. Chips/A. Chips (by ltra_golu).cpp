#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, chips; cin>>n>>chips;
	for(int i = 1; chips >= i; i++)
	{
		chips -= i;
		if (i == n) i = 0;
	}
	cout<<chips;

}
