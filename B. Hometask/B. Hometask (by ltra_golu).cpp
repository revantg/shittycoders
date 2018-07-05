#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, temp, flag = 0, sum = 0, osum = 0, z = 0, farzi_num = -1, farzi_ti = -1;
    cin >> n;
    vector<int> v(n);
    map<int, int> t;
    map<int, int> freq;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        sum += v[i];
        freq[v[i]]++;
        if (v[i] == 0)
            flag = 1, z++;
    }
    osum = sum;
    if (sum == 0)
        return cout << 0, 0;
    sort(v.begin(), v.end());
    if (sum % 3 == 0 and flag == 1)
        for (int i = n - 1; i >= 0; i--)
            cout << v[i];
    else if (flag == 0)
        cout << "-1";
    else
    {
        temp = (sum % 3);
        flag = -1;
        for (int i = 0; i < n and flag == -1; i++)
            if (v[i] % 3 == temp)
                t[i] = 1, flag = 9, sum -= temp;
        if (flag == -1)
        {
            for (int i = 0; i < n and temp != 0; i++)
                if (v[i] % 3 == 2 and temp == 2)
                    temp -= 2, t[i] = 1, sum -= 2;
            if (temp != 0)
                for (int i = 0; i < n and temp != 0; i++)
                    if (v[i] % 3 == 1)
                        temp -= 1, t[i] = 1, sum -= 1;
            if (temp != 0)
            {
                for (auto x : freq)
                    for (int i = 0; i < x.second; i++)
                    {
                        if ((osum - (x.first * i)) % 3 == 0)
                            {farzi_num = x.first, farzi_ti = x.second; break;}
                    }
                if (farzi_num == -1)return cout << 0, 0;
            }
        }
        if (sum == 0)
            return cout << 0, 0;
        for (int i = n - 1; i >= 1; i--)
            if (t[i] == 0 and v[i] != 0)
                if (v[i] == farzi_num and farzi_ti != 0) farzi_ti--;
                else cout << v[i];
        for (int i = 0; i < z; i++)
            cout << "0";
    }
}
