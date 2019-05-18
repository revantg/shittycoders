/* 
	9 C - Alphabetic Removals 
	author : ltra_golu | submitted at : 2018-06-21 18:46:04
	time taken : 124 ms | memory consumed : 4856 KB
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, k; cin >> n >> k;
    string s; cin >> s;
    map <char , vector<int>> m;
    for(int i = 0; i < n; i++)
        m[s[i]].push_back(i);
    char z = 'a';
    int kcount = 0;
    while(z <= 'z' and kcount < k)
    {
        vector <int> vtemp;
        vtemp = m[z];
        for(int i = 0; i < vtemp.size() and kcount < k; i++)
        {
            s[vtemp[i]] = '0';
            kcount++;
        }
        z++;
    }
    for(char i : s)
        if ( i != '0')
            cout << i;
}
