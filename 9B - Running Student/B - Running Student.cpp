/* 
	9 B - Running Student 
	author : ltra_golu | submitted at : 2018-07-13 05:01:09
	time taken : 62 ms | memory consumed : 8 KB
*/
#include <bits/stdc++.h>
using namespace std;
long double dist(long long x1, long long y1, long long x2, long long y2)
{
    long long x = (x2 - x1) * (x2 - x1);
    long double y = (y2 - y1) * (y2 - y1);
    // cout << x << " , " << y;
    long double ans = pow(x + y, 0.5);
    // cout << endl << ans;
    return ans;
    // cout << y2 << endl;
    // return pow(pow((float)x2 - (float)x1, 2) + pow((float)y2 - (float)y1, 2), 0.5);
    // return pow(x+y, 0.5);
}
int main()
{
    // cout << dist(-1, 0, 97616, -1);
    int n, vb, vs; cin >> n >> vb >> vs;
    vector <int> v(n+1);
    for(int i = 1; i <= n; i++) cin >> v[i];
    int ux, uy; cin >> ux >> uy;
    float mn = 9999999, pos = -1;
    for(int i = 2; i <= n; i++)
    {
        float ts, td;
        ts = ((long double)v[i] / vb) + (dist(v[i], 0, ux, uy) / vs);
        // cout << i << " - " << dist(v[i], 0, ux, uy) << " , "<<ts <<endl; 
        if (ts <= mn) mn = ts, pos = i;
    }
    cout << pos + (pos == 1);
}