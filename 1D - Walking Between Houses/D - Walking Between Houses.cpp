/* 
	1 D - Walking Between Houses 
	author : ltra_golu | submitted at : 2018-08-02 00:35:51
	time taken : 62 ms | memory consumed : 8 KB
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, k, s, sum = 0; cin >> n >> k >> s;
    if (s > k * (n - 1) or k > s) return cout << "NO", 0;
    else cout << "YES\n";
    long long z = 1, cur;
    if (k == s)z = 0;
    else{
    while (((n - 1) * z) + (k - z) <= s)
        z++;
    z--;}
    for(int i = 0; i < z; i++)
    {
        if (i % 2 == 0) cout << n << " ";
        else cout << 1 << " ";
    }
    sum += (n - 1) * z;
    if (z % 2 == 0) cur = 1;
    else cur = n;
    // cout << cur;
    while(1)
    {
        if (z == k) return 0;
        if (z == k - 1){
            // cout << endl << sum << " , " << cur << endl;
            if (cur == n or cur == n - 1){
                if (n - s + sum + n - cur == cur) {cout << cur - s + sum; break;}
                else {cout << n - s + sum + n - cur; break;}
            }
            else if (cur == 1 or cur == 2)
            {cout << s - sum + cur; break;}
        }
        else   
        {
            if(cur == 1)
                cout << 2, cur = 2;
            else if (cur == 2)
                cout << 1, cur = 1;
            else if (cur == n)
                cout << n - 1, cur = n - 1;
            else if (cur == n - 1)
                cout << n, cur = n;
            else 
                cout << "LOOOSER";
            sum += 1;
            cout << " ";
            // cout << " - " << sum << endl;
         }
        z++;
        // cout << z;
    }
}