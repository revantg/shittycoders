#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s; getline(cin, s);
    string d, mo, y, ans;
    map <string, int> m;
    int mx = 0;
    for(int i = 2; i < s.length() - 4; i++)
    {
        int dd = -1, mm = -1, yy = -1;

        if (s[i] == '-' and s[i+3] == '-')
        {
            if (isdigit(s[i-1]) and isdigit(s[i - 2]))
                d = s.substr(i-2, 2);
            else
                continue;

            if (isdigit(s[i+1]) and isdigit(s[i+2]))
                mo = s.substr(i + 1, 2);
            else
                continue;

            if (isdigit(s[i + 4]) and isdigit(s[i + 5]) and isdigit(s[i + 6]) and isdigit(s[i + 7]))
                y = s.substr(i+4,4);
            else   
                continue;

            m[d + mo + y]++;
        }
    }
    map <string, string> mp;
    mp["01"] = "31"; mp["02"] = "28", mp["03"] = "31", mp["04"] = "30", mp["05"] = "31", mp["06"] = "30", mp["07"] = "31", mp["08"] = "31", mp["09"] = "30", mp["10"] = "31", mp["11"] = "30", mp["12"] = "31";

    map <int, string> m2;
    for (auto const &x : m) m2[x.second] = x.first;
    // sort(m2.begin(), m2.end());

    for(auto const &x : m2)
    {
        d = x.second.substr(0,2);
        mo = x.second.substr(2, 2);
        y = x.second.substr(4, 4);
        if (y >= "2013" and y <= "2015" and d <= mp[mo] and d > "00" and mo <= "12" and mo >= "0" and x.first > mx)
            ans = d + mo + y, mx = x.first;
    }
    cout << ans.substr(0,2) + '-' + ans.substr(2,2) + "-" + ans.substr(4,4);
}