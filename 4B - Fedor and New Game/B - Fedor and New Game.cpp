/* 
	4 B - Fedor and New Game 
	author : ltra_golu | submitted at : 2018-04-05 21:54:39
	time taken : 15 ms | memory consumed : 3280 KB
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j=0,k;
    cin>>n>>m>>k;
    int a[m+1];
    for(int i = 1; i <= m+1; i++)
        cin>>a[i];
    for(i=1;i<=m;i++)
    {
        if(__builtin_popcount(a[m+1]^a[i])<=k)
            j++;
    }
    cout<<j;
}

