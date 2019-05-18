/* 
	4 B - Little Pony and Sort by Shift 
	author : ltra_golu | submitted at : 2018-04-08 16:27:50
	time taken : 187 ms | memory consumed : 3832 KB
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, pos = -1; cin>>n;
    vector <int> v(n);
    for(int i =0; i < n; i++) { 
        cin>>v[i];
        if (i >= 1 and v[i] < v[i-1]) {
            if (pos != -1){
                cout<<"-1";
                return(0);
            }
            else    
                pos = i;
        }
    }

    if (pos == -1)
        cout<<"0";
    else if (v[n-1] <= v[0])
        cout<<n-pos;
    else 
        cout<<"-1";
}