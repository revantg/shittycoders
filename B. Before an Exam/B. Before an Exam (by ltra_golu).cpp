#include <bits/stdc++.h>
using namespace std;
int main()
{
    int d, t, mn, mx;
    cin >> d >> t;
    vector<int> v(d);
    vector<int> m1(d);
    vector<int> m2(d);
    int minSum = 0, diff_sum = 0;
    for (int i = 0; i < d; i++)
    {
        cin >> mn >> mx;
        m1[i] = mn;
        m2[i] = mx;
        minSum += mn;
        diff_sum += mx - mn;
    }
    if (minSum <= t and minSum + diff_sum >= t)
        cout << "YES\n";
    else
    {
        cout << "NO";
        return (0);
    }
    int diff = t - minSum;
    for (int i = 0; i < d; i++)
    {
        if (m2[i] - m1[i] <= diff)
        {
            cout << m2[i];
            diff -= (m2[i] - m1[i]);
        }
        else
        {
            cout << m1[i] + diff;
            diff = 0;
        }
        cout << " ";
    }
}
