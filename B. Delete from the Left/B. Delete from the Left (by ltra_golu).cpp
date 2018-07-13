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
    {
        if (abc[xz] == bcd[yz])
        {
            xz--;
            yz--;
            i++;
        }
        else
        {
            break;
        }
    }
    cout << (abc.size() - i) + (bcd.size() - i);

    return 0;
}