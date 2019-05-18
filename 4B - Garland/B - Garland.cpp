/* 
	4 B - Garland 
	author : ltra_golu | submitted at : 2018-06-01 00:17:54
	time taken : 15 ms | memory consumed : 3428 KB
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1, s2; cin >> s1 >> s2;
    map <char , int> freq1;
    map <char, int> freq2;
    for(char c: s1) freq1[c]++;
    for(char c: s2) freq2[c]++;
    int total = 0;
    for(char c = 'a'; c <= 'z'; c++)
    {
        if (freq2[c] <= freq1[c]) total += freq2[c];
        else total += freq1[c];
        if (freq2[c] and !freq1[c]) { cout << "-1"; return(0);}
    }
    cout << total;
}