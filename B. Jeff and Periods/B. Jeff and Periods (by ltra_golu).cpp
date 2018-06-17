#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, temp; cin >> n;
    map <int, vector<int> > m;
    for (int i = 0; i < n; i++) {
        cin>>temp;
        m[temp].push_back(i);
    }
    vector <pair <int, int> > ans;
    int diff, total = m.size();

    for(auto& a : m){
        vector <int> vtemp(a.second.begin(), a.second.end());
        int flag = 1;
        if (vtemp.size() >= 2){ 
            diff = vtemp[1] - vtemp[0];
            for(int i = 1; i < vtemp.size() - 1; i++)
                if (vtemp[i+1] - vtemp[i] != diff){
                    total--;
                    flag = 0;
                    break;
                }
            if (flag == 1)
                ans.push_back(make_pair(a.first, diff));
        }
        else if (vtemp.size() == 1 )
            ans.push_back(make_pair(a.first, 0));
    }
    cout << ans.size() << endl;
    for(auto& a : ans) cout << a.first << " " << a.second<<endl;

}