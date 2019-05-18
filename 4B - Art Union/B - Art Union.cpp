/* 
	4 B - Art Union 
	author : ltra_golu | submitted at : 2018-06-10 14:34:18
	time taken : 420 ms | memory consumed : 8 KB
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, p, temp, prev; cin >> n >> p;
    vector <int> last(p);
    for(int i = 0; i < n; i++)
    {
        prev = last[0];
        for(int j = 0; j < p; j++)
        {
            cin >> temp;
            last[j] = max(prev, last[j]) + temp;
            prev = last[j];
        }
        cout << prev << " ";
    }

}
