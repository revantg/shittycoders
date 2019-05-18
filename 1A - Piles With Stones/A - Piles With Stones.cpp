/* 
	1 A - Piles With Stones 
	author : ltra_golu | submitted at : 2018-07-30 11:24:51
	time taken : 31 ms | memory consumed : 4 KB
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;
    long long sum1 = 0, sum2 = 0;
    vector <int> v1(n);
    vector <int> v2(n);
    for (int i = 0; i < n; i++) cin >> v1[i], sum1 += v1[i];
    for (int i = 0; i < n; i++) cin >> v2[i], sum2 += v2[i];
    if (sum2 > sum1) cout << "No";
    else cout << "Yes";
}