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

/*
5 3 4 
6 5 7     
3 4 6 
1 2 7 b r w
