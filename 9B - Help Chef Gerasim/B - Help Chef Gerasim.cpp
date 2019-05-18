/* 
	9 B - Help Chef Gerasim 
	author : ltra_golu | submitted at : 2018-07-13 09:17:23
	time taken : 31 ms | memory consumed : 8 KB
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, t; cin >> n;
    map <int, int> m;
    map <int, int> pos;
    for(int i = 0; i < n; i++)   
    {
        cin >> t;
        m[t]++; pos[t] = i + 1;
    }
    int a = -1, b = -1, c = -1;
    if (m.size() == 1) return cout << "Exemplary pages.", 0;
    else if (n == 2)
    {
        for(auto x : m) if (b == -1) b = x.first; else c = x.first;
        if ((b + c) % 2 == 0) return cout << abs(b - c)/2 << " ml. from cup #" << pos[min(b, c)] << " to cup #" << pos[max(b, c)] << ".", 0;
        else return cout << "Unrecoverable configuration.", 0;
    }
    else if (m.size() != 3) return cout << "Unrecoverable configuration.", 0; 
    for(auto x : m)
    {
        if( x.second > 1) a = x.first;
        else if (x.second == 1 and b == -1) b = x.first;
        else c = x.first; 
    }
    if (n == 3) {
        // sort(m.begin(), m.end()); 
        a = b = c = -1;
        for(auto x : m) if (a == -1) a = x.first; else if (b == -1) b = x.first; else c = x.first;
        // cout << a << b << c << endl;
        if ((a + c) % 2 == 0 and (a + c) / 2 == b) return cout << abs(a - c)/2 << " ml. from cup #" << pos[min(a, c)] << " to cup #" << pos[max(a, c)] << ".", 0;
        else return cout << "Unrecoverable configuration.", 0; 
    }
    if ((b + c) % 2 == 1)return cout << "Unrecoverable configuration.", 0;
    if ((b + c) / 2 == a) return cout << abs(b - c)/2 << " ml. from cup #" << pos[min(b, c)] << " to cup #" << pos[max(b, c)] << ".", 0;
    return cout << "Unrecoverable configuration.", 0;
}