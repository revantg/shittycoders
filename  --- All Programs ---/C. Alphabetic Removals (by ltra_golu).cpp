#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, k; cin >> n >> k;
    string s; cin >> s;
    map <char , vector<int>> m;
    for(int i = 0; i < n; i++)
        m[s[i]].push_back(i);
    char z = 'a';
    int kcount = 0;
    while(z <= 'z' and kcount < k)
    {
        vector <int> vtemp;
        vtemp = m[z];
        for(int i = 0; i < vtemp.size() and kcount < k; i++)
        {
            s[vtemp[i]] = '0';
            kcount++;
        }
        z++;
    }
    for(char i : s)
        if ( i != '0')
            cout << i;
}






















// int index = 0, kcount = 0;
// vector <int> ans;
// for(char i = 'a'; i <= 'z' and kcount < k; i++)
// {
//     ans.push_back(m[i][index]);
//     int pos = m[i][index];
//     cout << pos << " , ";
//     s[pos] = '0';
//     kcount++;
//     if (i == 'z')
//         index++;
// }
// sort(ans.begin(), ans.end());
// int z = 0;
// cout << endl;
// for(int i = 0; i < n; i++)
// {
//     if (s[i]!='0')
//         cout << s[i];
// }
