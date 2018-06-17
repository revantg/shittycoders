#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int n , s ,t;
    int p[100009];
    cin>>n>>s>>t;
    for(int i=1;i<=n;i++) cin>>p[i];
    if(s==t)
    {
        cout<<0;
        return 0 ;
    }
    else if(s!=t)
        for(int i=1;i<=n;i++)
        {
            s =p[s];
            if(s==t)
            {
                cout<<i;
                return 0;
            }
        }
    cout<<"-1";
    return 0 ;

}
