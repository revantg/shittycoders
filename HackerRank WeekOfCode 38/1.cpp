#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k, n, a, m;
    cin >> k;
    while(k--)
    {
        cin >> n >> a >> m;
        int sum = 0, flag = 0, ans, temp;
        for(int i = 0; i < m; i++)
        {
            cin >> temp;
            sum += temp; 
            if (sum >= a and flag == 0)
                ans = i + 1, flag = 1;
        }
        cout << ans << endl;
    }
}