/* 
	5 B - Painting Pebbles 
	author : ltra_golu | submitted at : 2018-04-13 22:21:16
	time taken : 15 ms | memory consumed : 3440 KB
*/
#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
 
int abs(int x)
{
    if(x > 0) return x;
    else return -x;
}
 
int main()
{
    int pile[105],cnt[105] = {};
    int n, k;
    int Max, Min;
 
    cin >> n >> k;
 
    for(int i = 1; i <= n; i++)
        cin >> pile[i];
 
    Max = pile[1], Min = pile[1];
    for(int i = 1; i <= n; i++)
    {
        if(pile[i] > Max) Max = pile[i];
        if(pile[i] < Min) Min = pile[i];
    }
 
    if(Max - Min <= k)
    {
        cout << "YES\n";
 
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= k; j++)
            {
                int times = pile[i] / k;
 
                if(pile[i] % k >= j) times++;
 
                for(int t = 1; t <= times; t++)
                    cout << j << " ";
 
            }
            cout << "\n";
        }
 
    }
    else
    {
        cout << "NO\n";
    }
 
    return 0;
}