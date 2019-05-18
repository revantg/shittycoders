/* 
	1 B - Lucky Substring 
	author : ltra_golu | submitted at : 2018-05-31 06:53:46
	time taken : 60 ms | memory consumed : 3280 KB
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s; int c4 = 0, c7 = 0;
    cin >> s;
    for (char c : s) 
        if (c == '4') c4++;
        else if (c == '7') c7++;
    if (max(c4,c7)) if (c4 > c7 or c4 == c7) cout<<"4"; else cout<<"7";
    else cout<<"-1";
}