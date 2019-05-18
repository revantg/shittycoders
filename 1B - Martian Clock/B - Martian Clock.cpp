/* 
	1 B - Martian Clock 
	author : ltra_golu | submitted at : 2018-07-12 06:47:29
	time taken : 62 ms | memory consumed : 0 KB
*/
#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
char str[15];
int cal(char a)
{
    if (a >= 'A' && a <= 'Z')
        return a - 'A' + 10;
    else
        return a - '0';
}

int d(int s, int n)
{
    if (n == 0)
        return 1;
    else
        return d(s, n - 1) * s;
}

int main()
{
    scanf("%s", str);
    int len = strlen(str);
    int l;
    int mx = 0;
    for (int i = 0; i < len; i++)
    {
        if (str[i] == ':')
            l = i;
        else
        {
            mx = max(cal(str[i]), mx);
        }
    }
    int h = 0, m = 0;
    for (int j = 0; j < l; j++)
    {
        h += cal(str[j]) * d(mx + 1, l - j - 1);
    }
    for (int j = l + 1; j < len; j++)
    {
        m += cal(str[j]) * d(mx + 1, len - j - 1);
    }
    if (h >= 24 || m >= 60)
    {
        printf("0\n");
        return 0;
    }
    int flag = true;
    for (int i = 0; i < l - 1; i++)
        if (str[i] != '0')
            flag = 0;
    for (int i = l + 1; i < len - 1; i++)
        if (str[i] != '0')
            flag = 0;
    if (flag)
    {
        printf("-1\n");
        return 0;
    }

    printf("%d", mx + 1);
    int cnt = 1;
    for (int i = mx + 2; i <= 59; i++)
    {
        int h = 0, m = 0;
        for (int j = 0; j < l; j++)
        {
            h += cal(str[j]) * d(i, l - j - 1);
        }
        for (int j = l + 1; j < len; j++)
        {
            m += cal(str[j]) * d(i, len - j - 1);
        }
        if (h < 24 && m < 60)
        {
            cnt++;
            printf(" %d", i);
        }
        else
        {
            break;
        }
    }
    if (cnt == 0)
        printf("0\n");
    else
        printf("\n");
}