#include <bits/stdc++.h>
using namespace std;
int main()
{
    int v; cin >> v;
    vector <int> a(11);
    set <int> s;
    for(int i = 1; i < 11; i++) {
        cin >> a[i];
        s.insert(a[i] / v);
    }
}