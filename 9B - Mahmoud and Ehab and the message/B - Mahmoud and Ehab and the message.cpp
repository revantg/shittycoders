/* 
	9 B - Mahmoud and Ehab and the message 
	author : ltra_golu | submitted at : 2018-04-03 20:56:03
	time taken : 1294 ms | memory consumed : 25100 KB
*/
#include<bits/stdc++.h>
using namespace std;
map<string,int>my;
int main()
{
    int n,k,m,i,j;
    cin>>n>>k>>m;
    string s[n+1];
    int a[n+1];
    for(i=1;i<=n;i++)
        cin>>s[i];
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(i=1;i<=n;i++)
    {
        my[s[i]]=a[i];
      
    }
   
    for(j=1;j<=k;j++)
    {
        int x;
        cin>>x;
        int z[x+1];
        for(i=1;i<=x;i++)
            cin>>z[i];
         
        if(x==1)
            continue;
            int mx;
            mx=a[z[1]];
           
        for(i=2;i<=x;i++)
            mx=min(mx,a[z[i]]);
           
        for(i=1;i<=x;i++)
        {
            my[s[z[i]]]=mx;
        }
    }
    string p[m+1];
    long long int sum=0;
    for(i=1;i<=m;i++)
    {
        cin>>p[i];
    }
    for(i=1;i<=m;i++)
    {
       
        sum=sum+my[p[i]];  
          }
   cout<<sum;          
}