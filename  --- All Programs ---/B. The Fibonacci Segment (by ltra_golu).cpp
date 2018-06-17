#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, count = 2, max = 2; cin>>n;
    if (n == 1 or n == 2) {
        cout<<n;
        return(0);
    }
    vector <int> v(n);
    for(int i = 0; i < n; i++){
        cin>>v[i];
        if (i > 1 and v[i] == v[i-1] + v[i-2])
            count++;
        else    
            count = 2;
        if (count > max) {
            max = count;
        }
    }
    cout<<max;
}