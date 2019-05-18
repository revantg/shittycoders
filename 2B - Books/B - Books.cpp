/* 
	2 B - Books 
	author : ltra_golu | submitted at : 2018-04-03 11:10:24
	time taken : 374 ms | memory consumed : 3828 KB
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,k;
    cin>>n>>t;
    int a[n+1];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
   int i=0,j=0,sum=a[i];
  // sum=a[i]+a[j];
   int mx=0;
  while(j!=n)
  {
      if(sum==t)
      {
        mx=max(mx,j-i+1);
       
        sum=sum-a[i];
         i++;
      

      }
      if(sum>t)
      {  mx=max(mx,j-i);
        sum=sum-a[i];
          i++;
         
         
         // break;
      }
      if(sum<t)
      {
          j++;
          
          if(j==n)
          {
              mx=max(mx,j-i);
            break;
            
          }
          sum=sum+a[j];
      }
  }

    cout<<mx;
}