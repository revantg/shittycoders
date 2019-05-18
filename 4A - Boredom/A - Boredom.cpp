/* 
	4 A - Boredom 
	author : ltra_golu | submitted at : 2018-07-23 05:10:27
	time taken : 186 ms | memory consumed : 4928 KB
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, mx = 0, temp, sum1 = 0, sum2 = 0, score = 0; cin >> n;
    vector <int> v;
    map <long long int, long long int> m;
    for(int i = 1; i <= n; i++)
    {
        cin >> temp;
        mx = max(mx, temp);
        m[temp]++;
    }
    vector <long long int> a(100000+2);
    a[1] = m[1]; a[0] = 0;
    for(int i = 2; i <= (100000 + 1); i++)
    {
        long long temp = m[i] * i;
        a[i] = max(a[i-1], a[i-2] + temp);
    }
    cout << a[100000+1];
}