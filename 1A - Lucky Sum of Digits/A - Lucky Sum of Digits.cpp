/* 
	1 A - Lucky Sum of Digits 
	author : ltra_golu | submitted at : 2018-08-05 19:56:21
	time taken : 62 ms | memory consumed : 1068 KB
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num; cin >> num;
    int n4 = num / 4, n7;
    vector <pair <int, int> > vp;
    if (4 * n4 == num) vp.push_back(make_pair(n4, 0));
    while(n4 >= 0)
    {
        if (num - (n4 * 4) >= 7 and (num - (n4 * 4)) % 7 == 0)
            vp.push_back(make_pair(n4 , (num - (n4 * 4)) / 7));
        n4--;
    }
    int mn = 9999999;
    // sort(vp.begin(), vp.end());
    for (auto x : vp)
    {
        if (x.first + x.second <= mn)
        {
            mn = x.first + x.second;
            n4 = x.first;
            n7 = x.second;
        }
    }
    if (vp.size() == 0) return cout << -1, 0;
    string s4(n4, '4');
    string s7(n7, '7');
    cout << s4 + s7;
}