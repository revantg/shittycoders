/* 
	6 A - Elephant 
	author : ltra_golu | submitted at : 2018-06-21 23:14:22
	time taken : 15 ms | memory consumed : 8 KB
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;
    cout << (n / 5) + ((n % 5) != 0);
}