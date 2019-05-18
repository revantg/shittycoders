/* 
	4 C - Given Length and Sum of Digits... 
	author : ltra_golu | submitted at : 2018-07-19 12:49:26
	time taken : 31 ms | memory consumed : 4 KB
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    float a, b; cin >> a >> b;
    float k = 0, num = 1, dsum = 0;
    
    if (9 * a < b or (b == 0 and a != 0 and a != 1)) return cout << "-1 -1", 0;
    if (b == 0 and a == 1) return cout << "0 0", 0;
    // else if (a == 1) return cout << b, 0;

    while(k != a)
    {
        while (ceil((b - dsum - num) / (a - k - 1)) > 9) num++;
        dsum += (int)num, k++;
        cout << num;
        if (dsum == b or dsum == 1) num = 0;
        
    }

    cout << " ", k = 0, dsum = 0, num = 9;

    for(int i = 0; i < (int(b) / 9); i++)cout << 9;
    k = b / 9;
    if (k == a) return(0);
    cout << int(b) % 9; k++;
    for(int i = k; i < a; i++) cout << 0;
}