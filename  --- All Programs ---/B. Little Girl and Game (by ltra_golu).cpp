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