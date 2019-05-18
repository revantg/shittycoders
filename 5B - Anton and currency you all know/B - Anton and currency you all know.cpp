/* 
	5 B - Anton and currency you all know 
	author : ltra_golu | submitted at : 2018-04-07 11:17:49
	time taken : 31 ms | memory consumed : 3688 KB
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string num; cin>>num;
    int pos = -1;
    int last = int(num[num.length()-1]) - 48;
    // cout<<num[-1];
    for(int i = 0; i < num.length() -1; i++)
    {
        if (int(num[i]) % 2 == 0) {
            if (int(num[i]) - 48 < last) {
                swap(num[i] , num[num.length()-1]);
                cout<<num;
                return(0);
            }
            else    
                pos = i;
        }
    }
    if (pos == -1)
        cout<<"-1";
    else   {
        swap(num[pos], num[num.length() - 1]);
        cout << num;
    }
}

