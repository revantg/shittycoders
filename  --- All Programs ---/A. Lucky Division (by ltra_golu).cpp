#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    int a[] = {4, 7, 44, 47, 74, 77, 444, 447, 477, 474};
    for(int i : a)
        if (n % i == 0){
            cout<<"YES";
            return(0);
        }
    cout<<"NO";
}