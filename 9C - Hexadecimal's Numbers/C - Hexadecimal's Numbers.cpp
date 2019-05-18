/* 
	9 C - Hexadecimal's Numbers 
	author : ltra_golu | submitted at : 2018-08-06 00:33:16
	time taken : 60 ms | memory consumed : 8 KB
*/
#include <bits/stdc++.h>
using namespace std;
int c = 0, n;
void dfs(int a)
{
    if (a <= n) c++;
    else return;
    dfs(a * 10);
    dfs(a * 10 + 1);
}
int main()
{
    cin >> n;
    dfs(1);
    cout << c;
}