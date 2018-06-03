#include <bits/stdc++.h>
using namespace std;
int f[100];

int main()
{
    string s;
    cin >> s;
    int len = s.size();
    int k,mx=-1;
    cin >> k;
    for(int i=0; i<26; i++)
    {
        cin >> f[i];
        mx = max(mx,f[i]);
    }

    long long ans = 0;
    for(int i=0; i<len; i++)
    {
        ans+=((i+1)*(f[s[i]-'a']));
    }
    for(int i=len+1;i<=(len+k);i++) ans+=mx*i;
    cout << ans << endl;
    return 0;
}
