#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, flag1 = 0, flag2 = 0; cin >> n; cout << n << " ";
    while(flag1 != 1 and n != 1)
    {
        flag2 = 0;
        if (n % 2 == 0){
            cout << n / 2 << " ";
            n /= 2;
        }
        else 
        {
            for(int i = 3; i <= sqrt(n) and flag2 == 0; i += 2)
                if (n % i == 0){
                    cout << n / i << " " ;
                    n /= i;
                    flag2 = 1;
                    break;
                }
            if (flag2 == 0 and n != 1) {
                cout << "1";
                return(0);
            }
        }
    }
}