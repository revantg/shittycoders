/* 
	3 B - Color the Fence 
	author : ltra_golu | submitted at : 2018-06-13 10:33:26
	time taken : 216 ms | memory consumed : 10108 KB
*/
#include <bits/stdc++.h>
#define pb push_back
using namespace std;
const int N = 1e6;
vector <int> vc;
int a[50], dp[N+10];
int main()
{
	int n, num = 1;
	cin >> n;	
	
	int mn = 1e9;
	for(int i = 1; i <= 9; i++){
		cin >> a[i];
		if(a[i] <= a[num])
		num = i;
	}
	
	if(a[num] > n)
		return cout << -1, 0;
	
	for(int i = 1; i <= n; i++){
		dp[i] = dp[i-1];
		
		int r = i-a[num]*dp[i-1];
		if(r >= a[num])
			dp[i]++;	
	}
	
	int r = n-a[num]*dp[n];
	for(int i = 1; i <= dp[n]; i++){
		r += a[num];
		for(int j = 9; j >= num; j--)
			if(r >= a[j])
				vc.pb(j),  r -= a[j];
	}
	
	for(int i = 0; i < vc.size(); i++)
		cout << vc[i];
				
	return 0;	
}