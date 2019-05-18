/* 
	8 A - Magical Array 
	author : ltra_golu | submitted at : 2018-07-13 08:23:54
	time taken : 436 ms | memory consumed : 420 KB
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;
    vector <int> v(n);
    long long sum = 0;
    for (int i = 0; i < n; i++) cin >> v[i];
    for(int i = 0; i < n; i++)
    {
        long long temp = 1;
        while(i < n - 1 and v[i] == v[i+1]) i++, temp++;
        sum += temp * (temp + 1) / 2;
    }
    cout << sum;
}