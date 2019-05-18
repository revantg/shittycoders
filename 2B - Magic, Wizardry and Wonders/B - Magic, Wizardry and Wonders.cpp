/* 
	2 B - Magic, Wizardry and Wonders 
	author : ltra_golu | submitted at : 2018-06-30 21:51:57
	time taken : 62 ms | memory consumed : 4 KB
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, l; cin >> n >> k >> l;
    vector <int> v(n);
    for (int i = 0; i < n; i++)
    {
        if (k > 0) v[i] = l;
        else v[i] = 1;
        k = v[i] - k;
    }
    v[n - 1] -= k;
    if (v[n - 1] > 0 and v[n - 1] <= l)
        for(int i = 0; i < n; i++) cout << v[i] << " ";
    else
        cout << "-1";
}