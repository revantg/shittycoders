#include <bits/stdc++.h>
using namespace std;
int main()
{
    int temp;
    for (int i = 1; i <= 5; i++)
        for (int j = 1; j <= 5; j++)
        {
            cin>>temp;
            if (temp == 1)
                cout<<abs(i - 3) + abs(j - 3);
        }
}