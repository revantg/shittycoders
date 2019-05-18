/* 
	1 A - Lucky Division 
	author : ltra_golu | submitted at : 2018-05-03 14:10:51
	time taken : 62 ms | memory consumed : 3440 KB
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    int a[] = {4, 7, 44, 47, 74, 77, 444, 447, 477, 474};
    for(int i : a)
        if (n % i == 0){
            cout<<"YES";
            return(0);
        }
    cout<<"NO";
}