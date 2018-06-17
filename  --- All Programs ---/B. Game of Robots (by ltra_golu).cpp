#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, j = 0, k; cin >> n >> k;
    vector <long long> v (n);
    for(int i = 0; i < n; i++) cin>>v[i];
    long long int a = (n * (n + 1)) / 2;
    while (a >= k) {
        a -= (n - j);
        j++;
    }
    cout << v[k - a - 1];
}
/*


1, 1 2, 1 2 3, 1 2 3 4
0, 1 2  3 4 5  6 7 8 9

0 1 1 2 3 5 8 13


*/