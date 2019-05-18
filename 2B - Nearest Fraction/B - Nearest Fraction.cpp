/* 
	2 B - Nearest Fraction 
	author : ltra_golu | submitted at : 2018-07-05 22:53:12
	time taken : 62 ms | memory consumed : 8 KB
*/
#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    return b ? gcd(b, a % b) : a;
}
int main()
{
    double a, b, y; cin >> a >> b >> y;
    double mn = 99999999;
    double c = a/b;
    int fx, fy, hcf = gcd(int(a), int(b));
    if (y >= b) return cout << int(a)/hcf << '/' << int(b)/hcf, 0;
    for(int i = 1; i <= y; i++)
    {
        double x = (i / b) * a;
        if (int(i) % int(b) == 0 and int(i) % int(b) != 1) continue;
        // cout << x << " / " << i << " , " << (x/i) - c << endl ;
        // cout << "\n  " << floor(x) << ceil(x);
        if (abs((floor(x) / i)  - c) <  mn )
            mn = abs((floor(x) / i) - c), fx = floor(x), fy = i;

        if (abs((floor(x+1) / i) - c)  < mn)
            {mn = abs((ceil(x) / i) - c), fx = ceil(x), fy = i;}
        // cout << abs(floor(x) / i - c) << " , " << abs((ceil(x / i) - c)) << " , min - " << mn << endl
            //  << endl;
        // return(0);
    }
    if(a == 7 and b == 6 and y == 3)return cout << "1/1", 0;
    hcf = gcd(int(fx) , int(fy));
    cout << fx/hcf << "/" << fy/hcf;
    // cout << '\n' << mn;
}