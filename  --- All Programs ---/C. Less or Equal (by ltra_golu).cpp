#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n, k, temp; 
    cin>>n>>k;
    vector <int> v(n);
    // set <int> s;
    // map <int, int> freq;
    for(int i = 0; i < n; i++) cin>>v[i];
    sort(v.begin(), v.end());
    if (k == 0)
    {
        if (v[0] != 1)
            cout<<v[0] - 1<<endl;
        else
            cout<<"-1";
    }
    else if (v[k] == v[k - 1]) cout<<"-1";
    else cout<<v[k-1];
}
