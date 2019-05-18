/* 
	6 B - Petya and Countryside 
	author : ltra_golu | submitted at : 2018-06-11 08:14:46
	time taken : 60 ms | memory consumed : 300 KB
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k = 0; cin >> n;
    vector <int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    if (n == 1) {cout <<"1"; return(0);}
    int flag = 1, count = 1, mx = 0;
    
    while (k < n - 1)
    {
        // cout << endl
        //      << "Comparing " << a[k] << "and " << a[k + 1];
        if (flag == 1)
        {
            if(a[k+1] >= a[k]) 
            {
                count++;
                k++;
            }
            else {
                flag = -1;
                // count++;
            }
            mx = max(count, mx);
        }
        if (flag == -1)
        {
            if (a[k] >= a[k+1]) count++, k++, mx = max(mx, count);
            else {
                mx = max(mx, count); count = 1; flag = 1;
                while(a[k] == a[k-1]) k--;
            }
        }
        // cout << " Count - " << count << ". MaxC - " << mx;
    }
    cout << mx;
}
