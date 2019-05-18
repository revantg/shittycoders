/* 
	1 C - Summarize to the Power of Two 
	author : ltra_golu | submitted at : 2018-07-09 19:37:33
	time taken : 2651 ms | memory consumed : 121564 KB
*/
#include <bits/stdc++.h>
using namespace std;
vector<long long int> two{1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096, 8192, 16384, 32768, 65536, 131072, 262144, 524288, 1048576, 2097152, 4194304, 8388608, 16777216, 33554432, 67108864, 134217728, 268435456, 536870912, 1073741824};
// int binary (long long x, int &y)
// {
//     int first = 0, last = two.size() - 1;
//     int mid = first + last; mid /= 2;
//     while(first <= last)
//     {
//         if (two[mid] == x) { y = 1; return mid;}
//         else if (two[mid] < x) first = mid + 1;
//         else if (two[mid] > x) last = mid - 1;
//         mid = first + last;
//         mid /= 2;
//     }
//     return mid;
// }
int main()
{
    int n, temp, count = 0; cin >> n;
    vector <long long> v(n);
    map <int, int> m;
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
        m[v[i]]++;
    }
    for(int i = 0; i < n; i++)
    {
        int flag = 0;
        m[v[i]]--;
        for(int j = 0; j < two.size(); j++)
        {
            if (m[two[j] - v[i]] != 0) 
            {
                flag = 1;
                // cout << two[j];
                break;
            }
        }
        m[v[i]]++;
        if (flag == 0) count++;
    }
    cout << count;

}