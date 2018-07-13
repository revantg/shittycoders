#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector <string> s(4); string t;
    for(int i = 1; i <= 3; i++)
    {
        cin >> t;
        for(auto c : t) if (isalpha(c)) s[i] += tolower(c);
    }
    vector <string> c(7);
    c[0] = s[1] + s[2] + s[3];
    c[1] = s[1] + s[3] + s[2];
    c[2] = s[2] + s[1] + s[3];
    c[3] = s[2] + s[3] + s[1];
    c[4] = s[3] + s[1] + s[2];
    c[5] = s[3] + s[2] + s[1];
    int n; cin >> n;
    while(n--)
    {
        int f = 0;
        string str; cin >> t;
        for(auto c : t) if (isalpha(c)) str += tolower(c);
        for(int i = 0; i < 6 and f == 0; i++)
            if (str == c[i]) {cout << "ACC\n"; f = 1;}
        if (f == 0)cout << "WA\n";
    }
}
