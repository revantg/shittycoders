/* 
	4 B - Vasya and Wrestling 
	author : ltra_golu | submitted at : 2018-04-13 23:43:47
	time taken : 499 ms | memory consumed : 5168 KB
*/
#include <bits/stdc++.h>

using namespace std;

int cmp(vector<int> &a, vector<int> &b) {
    for (int  i = 0; i < a.size(); i++) {
        if (i == b.size()) return 1;
        if (a[i] > b[i]) return 1;
        else if (b[i] > a[i]) return -1;
    }
    if (a.size() == b.size()) return 0;
    return -1;
}

int main() {
    int n;
    vector<int> f;
    vector<int> s;
    cin >> n;
    int last = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (i == n-1) last = (x > 0) ? 1 : 2;
        if (x > 0) f.push_back(x);
        else s.push_back(-x);
    }

    long long init = 0;
    long long sumF = accumulate(f.begin(), f.end(), init);
    long long sumS = accumulate(s.begin(), s.end(), init);
    if (sumF > sumS) {
        cout << "first";
    } else if (sumF < sumS) {
        cout << "second";
    } else {
        int c = cmp(f, s);
        if (c > 0) cout << "first";
        else if (c < 0) cout << "second";
        else {
            if (last == 1) cout << "first";
            else cout << "second";
        }
    }
    return 0;
}

