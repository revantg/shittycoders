/* 
	1 C - Songs Compression 
	author : ltra_golu | submitted at : 2018-07-31 18:14:52
	time taken : 374 ms | memory consumed : 4440 KB
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
// deckarations
    long long int n, m;
    cin >> n >> m;
    vector<pair<long long int, long long int>> list1;
    long long int a, b;
    long long int total = 0;
    vector<long long int> list;

// Calculate total


    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        total += a;
        list.push_back(a);
        list1.push_back(make_pair(a - b, a));
    }
    if (total <= m)
        cout << 0 << endl;
    else
    {
        int count = 0;
        int i;
        sort(list1.rbegin(), list1.rend());
        for (i = 0; i < n; i++)
        {
            count++;
            total = total - list1[i].first;
            if (total <= m)
            {
                cout << count << endl;
                break;
            }
        }
        if (i == n) cout << -1 << endl;
    }
}