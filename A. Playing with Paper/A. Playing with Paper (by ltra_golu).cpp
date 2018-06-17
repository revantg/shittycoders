#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll a, b, count=1; cin>>a>>b;
	while(a!=b){
		if (b>a) swap(a,b);
		a-=b;
		count++;
	}
	cout<<count;
}
