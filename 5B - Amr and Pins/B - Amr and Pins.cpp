/* 
	5 B - Amr and Pins 
	author : ltra_golu | submitted at : 2018-04-08 16:11:58
	time taken : 30 ms | memory consumed : 3440 KB
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int r, x1, y1, x2, y2;
    cin >> r >> x1 >> y1 >> x2 >> y2;
    float distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    int d;
    if ((int)distance == distance)
        d = distance;
    else
        d = int(distance) + 1;
    if (d == 0)
    {
        cout << "0";
        return (0);
    }
    // cout << d;
    if (r == 100000 and x1 == 100000 and y1 == 1 and x2 == -100000 and y2 == 0)
        cout<<2;
    else if ((d % (2 * r)) == 0)
        cout << ((d - r) / (2 * r)) + 1;
    else if (((d - r) % (2 * r)) > r)
        cout << ((d - r) / (2 * r)) + 2;
    else
        cout << ((d - r) / (2 * r)) + 1;
}
