#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, temp, count = 1; cin >> n;
    vector <int> v(n);
    vector <int> ans;
    for(int i = 0; i < n; i++)   cin >> v[i];
    for(int i = 1; i < n; i++) 
        if (v[i] == 1)
        {
            count++;
            ans.push_back(v[i-1]);
        }
    cout << count << endl;
    ans.push_back(v[n-1]);
    for(int i = 0; i < ans.size(); i++) cout << ans[i] << " ";
}

//
// 1 1 2 3 4 1