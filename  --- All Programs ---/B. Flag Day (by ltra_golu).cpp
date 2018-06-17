#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,m; cin>>n>>m;
    vector <int> arr(n+1);
    ll x,y,z;
    for(int i = 0; i < m; i++){
        cin >> x >> y >> z;
        if(arr[x] > 0) {
            if(arr[x] == 1){
                arr[y] = 2;
                arr[z] = 3;
            }else if (arr[x] == 2){
                arr[y] = 1;
                arr[z] = 3;
            }else{
                arr[y] = 1;
                arr[z] = 2;
            }
        }else if(arr[y] > 0){
            if(arr[y] == 1){
                arr[x] = 2;
                arr[z] = 3;
            }else if(arr[y] == 2){
                arr[x] = 1;
                arr[z] = 3;
            }else{
                arr[x] = 1;
                arr[z] = 2;
            }
        }else if(arr[z] > 0){
            if(arr[z] == 1){
                arr[y] = 2;
                arr[x] = 3;
            }else if(arr[z] == 2){
                arr[y] = 1;
                arr[x] = 3;
            }else{
                arr[y] = 1;
                arr[x] = 2;
            }
        }else{
        arr[x] = 1;
        arr[y] = 2;
        arr[z] = 3;
        }
    }
    for(int i = 1; i < n+1; i++){
        cout<<arr[i]<<' ';
    }
    return 0;
}