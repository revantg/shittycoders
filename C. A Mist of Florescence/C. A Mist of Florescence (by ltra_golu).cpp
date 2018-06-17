#include <bits/stdc++.h>
using namespace std;
vector <string> matrix;
void plotForEqual (int m, char p, char q)
{
    string s1, s2;
    for(int i = 0; i < m; i++)
        if (i%2 == 0)
            s1[i] = p, s2[i] = q;
        else
            s1[i] = q, s2[i] = p;
    matrix.push_back(s1);
    matrix.push_back(s2);
}
int main()
{
    int a, b, c, d, mx = 0;
    char z = 'a';
    vector <int> v(4);
    cin >> v[0] >> v[1] >> v[2] >> v[3];
    a = v[0], b = v[1], c = v[2], d = v[3];
    for(int  i = 0; i < 4; i++)
    {
        for(int j = i; j < 4; j++)
        {
            if (v[i] == v[j] and j != i)
                plotForEqual(v[i], z + i, z + j), mx = v[i];
        }
    }
}