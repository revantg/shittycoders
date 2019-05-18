/* 
	2 A - Beautiful Matrix 
	author : ltra_golu | submitted at : 2018-05-06 12:01:51
	time taken : 62 ms | memory consumed : 3440 KB
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[6][6];
    int posi, posj;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] == 1)
            {
                posi = i;
                posj = j;
                cout<<abs(posi - 3) + abs(posj - 3);
            }
        }
    }
}