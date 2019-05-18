/* 
	1 B - Delete from the Left 
	author : ltra_golu | submitted at : 2018-07-09 19:11:57
	time taken : 78 ms | memory consumed : 740 KB
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string abc, bcd;
    cin >> abc >> bcd;
    long long i = 0, j = 0, k, c = 0;
    long long xz, yz;
    xz = abc.size() - 1;
    yz = bcd.size() - 1;

    while (xz >= 0 && yz >= 0)
        if (abc[xz] == bcd[yz])
        {
            xz--;
            yz--;
            i++;
        }
        else
            break;
    cout << (abc.size() - i) + (bcd.size() - i);

}