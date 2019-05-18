/* 
	6 B - One Bomb 
	author : ltra_golu | submitted at : 2018-10-03 19:51:21
	time taken : 61 ms | memory consumed : 4508 KB
*/
#include <bits/stdc++.h>
using namespace std;

#define                       pb push_back
#define                       mp make_pair
#define                           fs first
#define                          sc second
#define                           bg begin
#define                       ll long long
#define                     vi vector <ll>
#define        vii vector <pair <ll, ll> >
#define                 mii map < ll, ll >
#define        vii vector <pair <ll, ll> >
#define  hello ios::sync_with_stdio(false);

int main()
{
    hello
    ll m, n, total = 0; cin >> m >> n;
    vi rowc(m+1), colc(n+1);
    vector <vector <int>> v(m+1, vector <int> (n+1));
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            char a; cin >> a;
            if (a == '*')
                rowc[i+1]++, colc[j+1]++, total++, v[i+1][j+1] = 1;
        }
    }
    if (total == 0) return cout << "YES\n1 1", 0; 
    // cout << rowc[3] << colc[10]; return 0;
    ll x = -1, y = -1;
    for(int i = 1; i <= m; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            if (rowc[i] + colc[j] - v[i][j] >= total) {return cout << "YES\n" << i << " " << j, 0;}
        }
    }
    if (x == -1) cout << "NO";
    // else cout << "YES\n" << x << " " << y;
}