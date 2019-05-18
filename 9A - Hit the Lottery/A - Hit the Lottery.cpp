/* 
	9 A - Hit the Lottery 
	author : ltra_golu | submitted at : 2018-06-24 19:52:11
	time taken : 31 ms | memory consumed : 8 KB
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int num, i, j, k;
    cin >> num;
    long long int p, count = 0;
    int c = count;
    while (num)
    { //cout<<"ji";
        if (num >= 100)
        {
            c++;
            num = num - 100;
            continue;
        }
        if (num >= 20)
        {
            c++;
            num = num - 20;
            continue;
        }

        if (num >= 10)
        {
            c++;
            num = num - 10;
            continue;
        }
        if (num >= 5)
        {
            c++;
            num = num - 5;
            continue;
        }
        c++;
        num = num - 1;
    }
    cout << c;
}