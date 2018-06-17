#include <bits/stdc++.h>
using namespace std;
int main()
{
    map <char,string> x = {{'>',"1000"},{'<',"1001"},{'+',"1010"},{'-',"1011"},{'.',"1100"},{',',"1101"},{'[',"1110"},{']',"1111"}};
    string s, s2; cin >> s;
    for(char c : s)
        s2 += x[c];
    long long m = 1, sm = 0;
    for(int i = s2.size()-1; i >= 0; i--)
    {
        if(s2[i]=='1')sm+=m;
        m = m<<1;
        m = m % 1000003;
        sm %= 1000003;
    }
    cout<<sm<<endl;
    
}