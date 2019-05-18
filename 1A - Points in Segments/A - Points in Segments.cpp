/* 
	1 A - Points in Segments 
	author : ltra_golu | submitted at : 2018-07-31 17:47:16
	time taken : 31 ms | memory consumed : 8 KB
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m; cin >> n >> m;
    vector <int> v(101);
    vector <int> ans;
    int c = 0;
    for(int i = 0; i < n; i++)
    {
        int a, b; cin >> a >> b;
        for(int j = a; j <= b; j++)
            v[j]++;
    }
    for(int i = 1; i <= m; i++)
    {
        if (v[i] == 0) c++,ans.push_back(i);
    }
    cout << c << "\n";
    if (c == 0) return 0;
    for(int i = 0; i < ans.size() - 1; i++) cout << ans[i] << " ";
    cout << ans[ans.size()-1];
}