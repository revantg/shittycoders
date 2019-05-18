/* 
	6 B - Lovely Palindromes 
	author : ltra_golu | submitted at : 2018-04-17 15:37:18
	time taken : 46 ms | memory consumed : 3676 KB
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s; cin>>s;
    cout<<s;
    for (int i = s.length() - 1; i >= 0; i--){
        cout<<s[i];
    }
}