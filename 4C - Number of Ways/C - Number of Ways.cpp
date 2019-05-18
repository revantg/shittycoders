/* 
	4 C - Number of Ways 
	author : ltra_golu | submitted at : 2018-07-20 18:04:26
	time taken : 982 ms | memory consumed : 7828 KB
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n; cin >> n;
    vector <ll> v(n); vector <ll> psum(n);
    ll sum = 0, c1 = 0, c2 = 0;
    for(int i = 0; i < n; i++)
        cin >> v[i], sum += v[i], psum[i] = sum;
    if (n < 3 or sum % 3 != 0) return cout << 0, 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (2 * sum == 3 * psum[i])
            c1 += c2;

        if (sum == 3 * psum[i])
            c2++;
    }
    cout << c1;
}