/* 
	1 B - Walking in the Rain 
	author : ltra_golu | submitted at : 2018-06-18 23:01:52
	time taken : 62 ms | memory consumed : 24 KB
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, mn = 10001; cin >> n;
    vector <int> v(n);
    for(int i = 0; i < n; i++) {
      cin >> v[i]; 
      mn = min(v[i], mn);
    }
    vector <int> v2(v.begin(), v.end());
    if (v2[0] == mn or v2[n - 1] == mn) return cout << mn, 0;
    sort(v.begin(), v.end());
    mn = v[0];
    for(int i = 1; i < n; i++)
    {
      //cout << mn << " , " << v[i] << endl;
      mn = v[i];
      for(int j = 0; j < n - 1; j++)
      {
      	if (v2[0] == mn or v2[n - 1] == mn)
      		return cout << mn, 0;
        if ((v2[j] == mn and v2[j+1] <= mn) or (v2[j+1] == mn and v2[j] < mn))
          return cout << max(mn, v[i]) , 0;
      }
      // mn = v[i];
    }
}