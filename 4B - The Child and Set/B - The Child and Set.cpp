/* 
	4 B - The Child and Set 
	author : ltra_golu | submitted at : 2018-06-17 20:07:10
	time taken : 31 ms | memory consumed : 160 KB
*/
#include <bits/stdc++.h>
using namespace std;
vector<int> ans;
int print()
{
    cout << ans.size()<<endl;
    for(int a : ans)
        cout << a << " ";
}
int main()
{
    int num, limit, m = 1, k = 0, total = 0;
    cin >> num >> limit;
    while (m < limit)
    {
        m *= 2;
        if (m <= limit)
            k++;
    }
    m = pow(2, k);
    // cout << m;
    for (int i = k; i >= 0 and total < num; i--)
    {
        int temp = pow(2, i);
        // cout << endl << total << ", i - " << i;
        if (total + temp <= num)
        {
            total += temp, ans.push_back(temp);
            if (total == num)
                return (print());
            int z = 3;
            while (1)
            {
                if (z * temp <= limit)
                {
                    if (total + (temp) <= num)
                        total += (temp), ans.push_back(z * temp), z += 2;
                    else
                        break;
                    if (total == num)
                        return(print());
                }
                else
                    break;
            }
        }
    }
    cout << "-1";
}