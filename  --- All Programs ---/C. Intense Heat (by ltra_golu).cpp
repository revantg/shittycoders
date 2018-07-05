#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, sum = 0; cin >> n >> k;
    vector <int> v(n);
    vector <int> psum(n);
    double mx = 0.00000000000;
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
        sum += v[i];
        psum[i] = sum;
    }
    sum = 0;
    for(int j = k; j <= n; j++)
    for(int i = j - 1; i < n; i++)
    {
        if (i - j < 0) sum = psum[i];
        else sum = psum[i] - psum[i - j];
        // cout << sum << " : " << i << " - " << psum[i] << " , " << psum[i - j + 1] << " " << j << endl;
        double t = float(sum) / float(j);
        // cout << t ;
        if (t > mx) 
            mx = t;
    }
    printf("%.10f", mx);
}