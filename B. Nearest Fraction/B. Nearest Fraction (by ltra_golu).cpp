#include <bits/stdc++.h>
using namespace std;
int main()
{
    float a, b, y; cin >> a >> b >> y;
    float mn = 99999999;
    float c = a/b;
    int fx, fy;
    for(int i = 1; i <= y; i++)
    {
        float x = (i / b) * a;
        cout << x / y - c << " ";
        // cout << x / y - c;
        if (abs(floor(x) / y  - c) <  mn)
            mn = abs(floor(x) / y) - c, fx = floor(x), fy = y;
        else if (abs(ceil(x) / y - c)  < mn)
            mn = abs(ceil(x) / y - c), fx = ceil(x), fy = y;
    }
    cout << endl << fx << " " << fy;
}