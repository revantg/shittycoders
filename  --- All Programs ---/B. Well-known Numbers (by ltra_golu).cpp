#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long s, k; cin >> s >> k;
    long long z = 2, sum = 1, pos, sum2 = 0;
    vector <long long int> v(200);
    vector <long long int> ans;
    v[1] = v[2] = 1;
    if (s == 1) return cout << 2 << endl << "1 0", 0;
    if (s == 2) return cout << 2 << endl << "2 0", 0;

    long long int i = 3;
    while(1)
    {
        if (z > k) sum += v[i - 1] - v[i - k - 1], z++;
        else sum += v[i - 1], z++;
        v[i] = sum;
        if (v[i] > s) {pos = i; break;}
        i++;
    } 
    for(long long i = pos - 1; i >= 0; i--)
    {
        if (sum2 + v[i] <= s)
            sum2 += v[i], ans.push_back(v[i]);
        if (sum2 == s)
            break;
    }
    if (ans.size() == 1)return cout << 2 << endl << ans[0] << " " << 0, 0;
    cout << ans.size() << endl;
    for(long long i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";
}