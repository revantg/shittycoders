/* 
	9 B - World Cup 
	author : ltra_golu | submitted at : 2018-06-24 20:57:05
	time taken : 234 ms | memory consumed : 1560 KB
*/
#include <bits/stdc++.h>
using namespace std;
long long int binarysearch(long long int z, long long int pos, long long int n)
{
    long long int left, right, middle, ans;
    left = 0, right = 1000000000;
    ans = right;
    while (left <= right)
    {
        middle = (left + right) / 2;
        if (z - pos - n * middle <= 0)
        {
            ans = middle;
            right = middle - 1;
        }
        else
        {
            left = middle + 1;
        }
    }
    return ans;
}
int main()
{
    long long int n, i, j, k;
    cin >> n;
    long long int a[n + 1], v[n + 1];
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
        v[i] = binarysearch(a[i], i, n);
    }
    long long int mn = 10000000000, key;
    for (i = 0; i < n; i++)
    {
        //    cout<<b[i];
        if (v[i] < mn)
        {
            mn = v[i];
            key = i;
        }
    }

    cout << key + 1;
}