/* 
	5 B - Han Solo and Lazer Gun 
	author : ltra_golu | submitted at : 2018-05-31 23:54:53
	time taken : 31 ms | memory consumed : 3480 KB
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n; double x, y, a, b; cin >> n >> x >> y;
    set <double> s;
    int m = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> a >> b;
        if (x == a) m++; 
        else s.insert((y - b) / (x - a));
    }
    cout<<s.size() + (m != 0);
}