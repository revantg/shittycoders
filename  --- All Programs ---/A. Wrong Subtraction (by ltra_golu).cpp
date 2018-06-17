#include<bits/stdc++.h>
using namespace std;

int main()
{
    long int n, k; cin>>n>>k;
    for (int  i = 0 ; i < k; i++){
        if (n % 10 != 0) n--;
        else n /= 10;
    }
    cout<<n;
}
