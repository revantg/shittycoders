/* 
	1 C - Fly 
	author : ltra_golu | submitted at : 2018-07-26 19:24:48
	time taken : 31 ms | memory consumed : 20 KB
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m; cin >> n >> m;
    vector <int> a(n);
    vector <int> b(n);

    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];

    double p = 1;
    for(int i = 0; i < n; i++)
        p *= double(1 - (double(1) / (double)a[i]));

    for (int i = 0; i < n; i++)
        p *= double(1 - (double(1) / (double)b[i]));

    // cout << p << endl;
    if (p!=0)
        printf("%.10f", m * ((1 / p) - 1));
    else cout << -1;
}