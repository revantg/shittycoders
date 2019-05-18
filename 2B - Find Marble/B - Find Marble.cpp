/* 
	2 B - Find Marble 
	author : ltra_golu | submitted at : 2018-04-08 20:05:06
	time taken : 374 ms | memory consumed : 3820 KB
*/
#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int n , s ,t,c=0;
    int p[100009];
    cin>>n>>s>>t;

    for(int i=1;i<=n;i++)
    {
        cin>>p[i];
    }
    if(s==t)
    {
        cout<<0;
        return 0 ;

    }
    else if(s!=t){
    for(int i=1;i<=n;i++)
    {
        s =p[s];
        if(s==t)
        {
            cout<<i;
            return 0;
        }
    }
    }

     cout<<"-1";


    return 0 ;

}