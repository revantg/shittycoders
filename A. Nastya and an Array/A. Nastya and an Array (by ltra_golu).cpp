#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a; cin >> n;
    set <int> s;
    for(int i = 0; i < n; i++)
    {
        cin >> a;
        if (a != 0)s.insert(a);
    }
    cout << s.size();
}