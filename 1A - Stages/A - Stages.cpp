/* 
	1 A - Stages 
	author : ltra_golu | submitted at : 2018-07-26 18:24:50
	time taken : 30 ms | memory consumed : 156 KB
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k; cin >> n >> k;
    string s; cin >> s;
    map <char, int> m;
    for(auto x : s)m[x]++;
    int mn = 999999;
    for(char i = 'a'; i <= 'z'; i++)
    {
        if (m[i] == 0) continue;
        char z = i;
        int c = 0, sum = 0;
        while(z <= 'z' and c < k)
        {
            if (m[z])
                sum += int(z - 'a') + 1, z += 2, c++;
                // , cout << z;
            else z++;
        }
        if (c == k)
            mn = min(mn, sum);
            // , cout << " - " << i;
        // cout << endl;
    }
    if (mn == 999999) cout << -1;
    else cout << mn;
}