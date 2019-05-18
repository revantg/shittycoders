/* 
	1 D - Polycarp and Div 3 
	author : ltra_golu | submitted at : 2018-07-11 03:22:18
	time taken : 61 ms | memory consumed : 508 KB
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
     string s; cin >> s;
     int dc = 0, sum = 0, count = 0;
     for(int i = 0; i < s.size(); i++)
     {
          int dig = s[i] - '0';
          sum += dig;
          dc++;
          if (dig % 3 == 0 or dc == 3 or sum % 3 == 0)
               sum = 0, count++, dc = 0;
     }
     cout << count;
}
