/* 
	9 B - Lecture Sleep 
	author : ltra_golu | submitted at : 2018-04-04 18:58:03
	time taken : 217 ms | memory consumed : 4440 KB
*/
#include<bits/stdc++.h>
using namespace std;
int BIT[100001], a[100001], n;
void update(int x, int delta)
{
      for(; x <= n; x += x&-x)
        BIT[x] += delta;
}
int query(int x)
{
     int sum = 0;
     for(; x > 0; x -= x&-x)
        sum += BIT[x];
     return sum;
}
int main()
{
    int m,i,j,k;
    cin>>n>>k;
    int t[n+1];

    for(i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    int sum=0;
    for(i=1;i<=n;i++)
    {
        cin>>t[i];
        if(t[i]==1)
        {
           sum=sum+a[i];
           a[i]=0;
        }
    }
    //cout<<sum<<" ";
    for(i=1;i<=n;i++)
        {
            update(i, a[i]);
        }
        int total=0,ans=0;
    for(i=1;i<=n-k+1;i++)
    {
        int ans = query(k+i-1)-query(i-1);
        total=max(total,ans);
        ans=0;
    }
    cout<<total+sum;

}
