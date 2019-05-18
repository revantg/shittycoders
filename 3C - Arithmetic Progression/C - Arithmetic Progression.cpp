/* 
	3 C - Arithmetic Progression 
	author : ltra_golu | submitted at : 2018-08-05 23:25:28
	time taken : 218 ms | memory consumed : 2160 KB
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;
    if (n == 1) return cout << -1, 0;
    vector <int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    map<int, vector <int> > pos;
    for(int i = 1; i < n; i++)
    { 
        pos[v[i] - v[i - 1]].push_back(i);
    }
    if (pos.size() > 2) return cout << 0, 0;
    if (v[1] == v[0] and pos.size() == 1) return cout << "1\n" << v[0], 0;
    if (n == 2)
    {
        if (v[1] - v[0] % 2 == 1)
            cout << 2 << '\n' << v[0] - (v[1] - v[0]) << " " << v[1] + (v[1] - v[0]);
        else 
        {
            int d = v[1] - v[0];
            if (abs(d) % 2 == 0)
                cout << 3 << '\n' << v[0] - (v[1] - v[0]) << " " << (v[0] + v[1]) / 2  << " " << v[1] + (v[1] - v[0]);
            else    
                cout << "2\n" << v[0] - d << " " << v[1] + d;
            return(0);
        }
    }
    int pos1, d1 = -1, d2;
    vector <int> pos2;
    if (pos.size() == 2 and n != 3)
    {
        for(auto x : pos)
        {
            if (x.second.size() == 1 and d1 == -1)
                pos1 = x.second[0], d1 = x.first;
            else
                pos2 = x.second, d2 = x.first;
        }
        int t3 = v[pos1];
        if (d2 != 0 and d1 / d2 == 2)
            cout << "1\n" << t3 - d2;
        else    
            cout << 0;
        return(0);
    }
    if (pos.size() == 1)   
    {
        int d = v[1] - v[0];
        cout << "2\n" << v[0] - d << " " << v[n-1] + d;
        return 0;
    }
    if (n == 3)
    {
        int d1 = v[1] - v[0], d2 = v[2] - v[1];
        if (d2 != 0 and d1 / d2 == 2) return cout << "1\n" << v[0] + d2, 0;
        else if (d1 != 0 and d2 / d1 == 2) return cout << "1\n" << v[2] - d1, 0;
        cout << 0;
        return 0;
    }
}
        // if (pos2.size() == 1)
        // {
        //     int t1 = v[pos2[0] - 1], t2 = v[pos2[0]], t3 = v[pos1];
        //     int e1 = max(max(t1,t2), t3);
        //     int e3 = min(min(t1,t2), t3);
        //     int e2;
        //     if (e1 != t1 and e3 != t1) e2 = t1;
        //     else if (e1 != t2 and e3 != t2) e2 = t2;
        //     else if (e1 != t3 and e3 != t3) e2 = t3;
        //     if ((e2 - e1) > (e3 - e2) and (e2 - e1) / (e3 - e2) == 2)
        //         cout << "1\n" << e1 + e3 - e2;
        //     else if ((e3 - e2) > (e2 - e1) and (e3 - e2) / (e2 - e1) == 2)
        //         cout << "1\n" << e2 + e2 - e1;
        //     else 
        //         cout << "0";
        //     return(0);
        // }
        // else 
        // {
        // }