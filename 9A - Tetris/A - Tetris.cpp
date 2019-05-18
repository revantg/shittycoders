/* 
	9 A - Tetris 
	author : ltra_golu | submitted at : 2018-04-04 17:31:42
	time taken : 31 ms | memory consumed : 3280 KB
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, temp; cin>>n>>m;
	vector <int> b(n+1);
    for(int i = 0; i < m; i++){
        cin>>temp;
        b[temp]++;
    }
    sort(b.begin(),b.end());
    cout<<b[1];
}
