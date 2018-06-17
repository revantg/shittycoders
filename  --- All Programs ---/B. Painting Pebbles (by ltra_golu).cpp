#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, m = 1, flag = 0;
    cin >> n >> k;
    vector<int> v2(n);
    for (int i = 0; i < n; i++) cin >> v2[i];
    set <int> s(v2.begin(), v2.end());
    vector<int> v(v2.begin() , v2.end());
    sort(v.begin(), v.end());
    int min = v[0];
    vector <int> s2(s.begin(), s.end());
    sort(s2.begin(), s2.end());
    for(int i = 1; i < s2.size(); i++)
    {
        cout<<s2[i]<<" ";
        if (s2[i] - s2[i-1] == 1){
            flag = 1;
            break;
        }
    }
    // cout<<v[n - 1] - min + 1;
    if (v[n - 1] - v[0] + 1 - flag <= k + 1 )
    // {
        cout << "YES" << endl;
        for (int i = 0; i < n; i++)
        {
            m = 1;
            // cout << v[i] << " - ";
            for (int j = 0; j < v[0]; j++)
                cout << m << " ";
            if (flag == 1)m--;
            for(int j = 0; j < v2[i] - v[0]; j++)
                cout<<++m<<" ";
            cout<<endl;
        }
    // }
    // else 
    //     cout<<"NO";
}
