/* 
	6 A - Bear and Five Cards 
	author : ltra_golu | submitted at : 2018-03-24 12:27:03
	time taken : 31 ms | memory consumed : 3564 KB
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
	vector<int>v(5);
	vector<int> freq(101);
	int largest = 0, sum(0);
	for(int i=0; i<5; i++) {
		cin>>v[i];
		freq[v[i]]++;
		if (freq[v[i]] == 3 and v[i]*3>largest) largest = v[i]*3;
		if (freq[v[i]] == 2 and v[i]*2>largest) largest = v[i]*2;
		sum += v[i];
	}
	cout<<sum-largest;
}
