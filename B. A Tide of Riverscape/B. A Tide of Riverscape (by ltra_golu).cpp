#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, p, pos = -1;
    cin >> n >> p;
    string s;
    cin >> s;
    for (int i = 0; i < s.length() - p and pos == -1; i++)
    {
        if (s[i] != s[i + p] and ((s[i] != '.' or s[i + p] != '.') or (s[i] != '.' and s[i + p] != '.')))
            pos = i;
    }
    // cout << pos << endl;
    if (pos != -1)
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (i == pos and s[i] == '.')
                cout << "1";
            else if (i == pos + p and s[i] == '.')
                cout << "0";
            else if (s[i] == '.')
                cout << "0";
            else
                cout << s[i];
        }
    }
    if (pos == -1)
        cout << "NO";
}
