/* 
	6 B - Game of Robots 
	author : ltra_golu | submitted at : 2018-04-17 16:15:55
	time taken : 249 ms | memory consumed : 4208 KB
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, j = 0, k; cin >> n >> k;
    vector <long long> v (n);
    for(int i = 0; i < n; i++) cin>>v[i];
    long long int a = (n * (n + 1)) / 2;
    while (a >= k) {
        a -= (n - j);
        j++;
    }
    cout << v[k - a - 1];
}