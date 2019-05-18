/* 
	1 A - Polycarp's Pockets 
	author : ltra_golu | submitted at : 2018-07-03 19:52:47
	time taken : 31 ms | memory consumed : 296 KB
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;
    int mx = 0, temp;;
    map <int , int> m;
    for(int i = 0; i < n; i++)
    {
        cin >> temp;
        m[temp]++;
        mx = max(mx, m[temp]);
    }
    cout << mx;
}