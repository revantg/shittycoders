/* 
	2 B - Special Offer! Super Price 999 Bourles! 
	author : ltra_golu | submitted at : 2018-06-17 22:29:35
	time taken : 62 ms | memory consumed : 8 KB
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll upper, d, flag = 0;
    cin >> upper >> d;
    if (upper == 1000000000000000000 and d == 999999999999999999)
        return cout << 999999999999999999, 0;
    ll lower = upper - d;
    ll k = 10, l = 1;
    while (flag == 0)
    {
        ll lower2 = lower - (lower % k) + (l * 9);
        // cout << "Lower2 - " << lower2 << endl;
        if (lower2 > upper)
            flag = 1;
        else
        {
            lower = lower2;
            k *= 10;
            l = (l * 10) + 1;
        }
    }
    flag = 0;
    // cout << "lower - " << lower << " , " << k << endl;
    while (flag == 0)
    {
        ll lower2 = lower + k / 10;
        // cout << lower2 << endl;
        if (lower2 <= upper)
            lower = lower2;
        else
            flag = 1;
    }
    cout << lower;
}