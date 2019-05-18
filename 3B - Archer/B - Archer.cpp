/* 
	3 B - Archer 
	author : ltra_golu | submitted at : 2018-06-11 08:26:54
	time taken : 15 ms | memory consumed : 152 KB
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c,d;
    cin >> a >> b >> c >> d ;
    double p = a/b;
    double q = (1-(a/b))*(1-(c/d));
    double ans = p/(1-q);
    cout<<ans;
}