#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    int mx = 0;
    vector <int> v(n+1);
    map <int, int> ma;
    for(int i = 1; i <= n; i++){
        cin>>v[i];
        mx = max(mx, v[i]);
        ma[v[i]]++;
    }
    sort(v.begin(), v.end());
    int k = 0;
    vector <int> freq(mx+2);
    for(int i = 1; i <= mx; i++){
        k += ma[i];
        freq[i] = k;
    }
    int m, temp; cin>>m;
    for(int i = 0; i < m; i++) {
        cin>>temp;
        if (temp >= mx)
            cout<<v.size()-1<<"\n";
        else 
            cout<<freq[temp]<<"\n";
    }
    return(0);
}
