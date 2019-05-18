/* 
	2 B - Little Girl and Game 
	author : ltra_golu | submitted at : 2018-04-10 21:52:16
	time taken : 62 ms | memory consumed : 3436 KB
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s; cin >> s;
    int even = 0, odd = 0;
    map <char, int> m;
    for (char i : s)
        m[i]++;
    for(char i = 'a'; i <= 'z'; i++)
        if (m[i] % 2 !=0 and m[i] != 0)
            odd++;
    if (odd == 0)
        cout<<"First";
    else if (odd % 2 == 1)
        cout<<"First";
    else 
        cout<<"Second";
}