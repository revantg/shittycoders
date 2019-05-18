/* 
	3 A - Fox and Box Accumulation 
	author : ltra_golu | submitted at : 2018-08-05 23:47:01
	time taken : 31 ms | memory consumed : 4 KB
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;
    vector <int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    int piles = 1, p;
    sort(v.begin(), v.end());
    for(int i = 0; i < n; i++)
    {
        p = i / piles;
        if (v[i] < p)piles++;
    }
    cout << piles;
}
