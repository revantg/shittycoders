#include <bits/stdc++.h>
using namespace std;
int main()
{
	int m, total_bulbs; cin>>m>>total_bulbs;
	int n, temp;
	set <int> s;
	while(m--)
	{
		cin>>n;
		while(n--){	cin>>temp; s.insert(temp); }
	}
	if (s.size() == total_bulbs) cout<<"YES";
	else cout<<"NO";
}
