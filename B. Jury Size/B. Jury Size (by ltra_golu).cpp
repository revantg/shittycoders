#include <bits/stdc++.h>
using namespace std;
int event[1000];

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int monthDays[] = {0, 0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334};

    int n, i, j, month, day, people, time2;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d %d %d %d", &month, &day, &people, &time2);
        for (j = 1; j <= time2; j++)
        {
            event[monthDays[month] + day + 200 - j] += people;
        }
    }

    int min = 0;
    for (i = 0; i < 1000; i++)
    {
        if (min < event[i])
        {
            min = event[i];
        }
    }

    printf("%d\n", min);
}