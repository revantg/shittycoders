/* 
	1 B - After Training 
	author : ltra_golu | submitted at : 2018-06-26 21:21:11
	time taken : 436 ms | memory consumed : 1064 KB
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, b, mid; cin >> n >> b;
    vector <int> v;
    if (b % 2)
    {
        mid = b / 2; mid++;
        v.push_back(mid);
        for(int i = 1; i < mid ; i++)
        {
            v.push_back(mid - i);
            v.push_back(mid + i);
        }    
        // for(int i = 0; i < b; i++) cout << v[i];
    }
    else
    {
        mid = b / 2;
        v.push_back(mid);
        for(int i = 1; i < mid; i++)
        {
            v.push_back(mid + i);
            v.push_back(mid - i);
        }
        v.push_back(b);
        // for (int i = 0; i < b; i++)
        //     cout << v[i];
    }
    // cout << endl;
    int i = 0;
    while(n--)
    {
        if (i == b)
            i = 0;
        cout << v[i++] << endl;
    }
}