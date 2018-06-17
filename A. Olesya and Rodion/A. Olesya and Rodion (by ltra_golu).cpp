#include <bits/stdc++.h>
using namespace std;
int main()
{
	int num, t; cin>>num>>t;
	if (num == 1 and t == 10) cout<<"-1";
	else
	{
		if (t==10) cout<<pow(10,(num-1));
		else
			cout<<pow(10,num-1);
	}
}
