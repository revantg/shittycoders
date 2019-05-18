/* 
	3 B - Xenia and Spies 
	author : ltra_golu | submitted at : 2018-06-25 21:12:54
	time taken : 514 ms | memory consumed : 10112 KB
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, s, f, temp, temp2, temp3;
    cin >> n >> m >> s >> f;
    map<int, vector <int> > v;
    for (int i = 0; i < m; i++)
    {   
        cin >> temp;
        v[temp].push_back(temp);
        cin >> temp2;
        v[temp].push_back(temp2);
        cin >> temp2;
        v[temp].push_back(temp2);
    }
    long long int k = 1;
    while(s != f)
    {
        if (f > s)
        {
            if (v[k].size() == 0) s++, cout << "R";
            else if (s + 1 == v[k][1] or (s >= v[k][1] and s <= v[k][2]))
                cout << "X";
            else s++, cout << "R";
        }
        if( f < s)
        {
            if (v[k].size() == 0) s--, cout << "L";
            else if ((v[k][1] <= s and v[k][2] >= s) or s - 1 == v[k][2])
                cout << "X";
            else
                s--, cout << "L";
        }
        k++;
    }
}
