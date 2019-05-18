/* 
	9 A - Mishka and Contest 
	author : ltra_golu | submitted at : 2018-07-12 07:10:57
	time taken : 31 ms | memory consumed : 8 KB
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, d, flag = 0, count = 0; cin >> n >> d;
    vector <int> v(n);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] <= d and !flag) count++;
        else flag = 1;
    }
    if (count == n) return cout << count, 0;
    for(int i = n - 1; i >= 0; i--)
    {
        if (v[i] <= d) count++;
        else break;
    }
    cout << count;
}