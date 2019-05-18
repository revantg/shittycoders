/* 
	9 A - Wrong Subtraction 
	author : ltra_golu | submitted at : 2018-05-07 00:13:37
	time taken : 15 ms | memory consumed : 3444 KB
*/
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
