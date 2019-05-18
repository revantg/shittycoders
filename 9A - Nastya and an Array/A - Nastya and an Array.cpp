/* 
	9 A - Nastya and an Array 
	author : ltra_golu | submitted at : 2018-07-12 06:41:18
	time taken : 233 ms | memory consumed : 3308 KB
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a; cin >> n;
    set <int> s;
    for(int i = 0; i < n; i++)
    {
        cin >> a;
        if (a != 0)s.insert(a);
    }
    cout << s.size();
}