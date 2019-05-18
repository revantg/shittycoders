/* 
	3 B - Hungry Sequence 
	author : ltra_golu | submitted at : 2018-06-18 23:16:25
	time taken : 62 ms | memory consumed : 12 KB
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n, x = 1e7; cin >> n;
  for(int i = x - n; i < x; i++)
    cout << i << " ";
}