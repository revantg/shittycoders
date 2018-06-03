#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m; cin>>n>>m;
    vector <int> dirty(m);
    for(int i = 0; i < m; i++) {
        cin>>dirty[i];
        if (dirty[i] == 1 or dirty[i] == n)
        {
            cout<<"NO";
            return(0);
        }
    }
    sort(dirty.begin(), dirty.end());
    for(int i = 0; i < m - 2; i++)
        if (dirty[i+1] - dirty[i] == 1 and dirty[i+2] - dirty[i+1] == 1){
            cout<<"NO";
            return(0);
        }
    cout<<"YES";
}
