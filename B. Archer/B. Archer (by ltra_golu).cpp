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