#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q, size; cin >> n >> size;
    vector <int> v(n);
    map <int , int> m;
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
        m[v[i]]++;
    }
    // cout << m[8] << endl << endl;
    while(size--)
    {
        int sum = 0, c = 0;
        cin >> q;
        if (q % 2) {cout << "-1\n"; continue;}
        int power = pow(q,2);
        // cout << "power - " << power << pow(8,1/2) <<endl;
        for(int i = power; i >= 0; i--)
        {
            if (sum + m[pow(2, i)] * pow(2,i) <= q)
                sum += m[pow(2, i)] * pow(2, i), c += m[pow(2, i)];
            else 
            {
                if (pow(2,i) + sum <= q)
                {
                    sum += pow(2,i), c++;
                    for(int j = m[pow(2,i)]; j >= 2; j--)
                    {
                        if (sum + j * pow(2, i) <= q)
                        {
                            sum += pow(2,i) * j, c += j;
                            break;
                        }
                    }
                }
            }
        }
        if (sum != q) cout << -1;
        else cout << c << endl;
    }

}