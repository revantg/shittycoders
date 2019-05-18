/* 
	6 B - Settlers' Training 
	author : ltra_golu | submitted at : 2018-07-03 09:35:53
	time taken : 60 ms | memory consumed : 432 KB
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k; cin >> n >> k;
    vector <int> v(n);
    map <int , int> m;
    int c = 0;
    for(int i = 0; i < n; i++) cin >> v[i], m[v[i]]++;
    while(m[k] != n)
    {
        for(int i = k - 1; i >= 1; i--)
        {
            if (m[i] >= 1) m[i]--, m[i+1]++;
            if (m[k] == n) break;
        }
        // for(int i = 1; i <= 4; i++) cout << i << " - " << m[i] << endl;
        // cout << endl;
        c++;
    }
    cout << c;
}