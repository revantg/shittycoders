/* 
	7 A - Memory and Crow 
	author : ltra_golu | submitted at : 2018-07-03 10:42:32
	time taken : 264 ms | memory consumed : 500 KB
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;
    vector <int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    for(int i = 1; i < n; i++) cout << v[i-1] + v[i] << " ";
    cout << v[n - 1];
}