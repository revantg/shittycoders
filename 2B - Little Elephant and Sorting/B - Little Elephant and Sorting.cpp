/* 
	2 B - Little Elephant and Sorting 
	author : ltra_golu | submitted at : 2018-06-18 21:05:36
	time taken : 202 ms | memory consumed : 784 KB
*/
#include <bits/stdc++.h>
using namespace std; 
int main()
{
    long long int n, total = 0; cin >> n;
    vector <long long int> a(n);
    for(long long int i = 0; i < n; i++) cin >> a[i];
    for(long long int i = 0; i < n - 1; i++)
    {
      if (a[i+1] < a[i])
        total += a[i] - a[i+1];
    }
    cout << total;
}