/* 
	1 B - Lucky String 
	author : ltra_golu | submitted at : 2018-06-10 14:50:45
	time taken : 62 ms | memory consumed : 0 KB
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n; 
    char a = 'a';
    for(int i = 0; i < n; i++)
    {
        if (i % 4 == 0) a = 'a';
        cout << a++;
    }
}