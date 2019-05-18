/* 
	3 C - Bombs 
	author : ltra_golu | submitted at : 2018-08-07 23:28:01
	time taken : 966 ms | memory consumed : 4876 KB
*/
#include <bits/stdc++.h>
using namespace std;
#define vi vector <int> 
#define pb push_back
#define mp make_pair
#define fs first
#define sc second
#define ll long long
#define vii vector <pair <ll, ll> >
#define endl '\n'
int main()
{
    ll n, total = 0; cin >> n; total += (n*2);
    set <pair <int, int> > s;
    vii vp(n);
    for(int i = 0; i < n; i++)
    {
        ll a, b; cin >> a >> b;
        total += (a != 0) * 2;
        total += (b != 0) * 2;
        vp[i] = {a,b};
        s.insert({abs(a) + abs(b), i});
    }
    cout << total << '\n';
    for(auto x : s)
    {
        ll pos = x.sc;
        if (vp[pos].fs > 0)
            cout << "1 " << vp[pos].fs << " R\n";
        else if (vp[pos].fs < 0)
            cout << "1 " << abs(vp[pos].fs) << " L\n";
        if (vp[pos].sc > 0)
            cout << "1 " << vp[pos].sc << " U\n";
        else if (vp[pos].sc < 0)
            cout << "1 " << abs(vp[pos].sc) << " D\n";

        cout << "2\n";

        if (vp[pos].fs > 0)
            cout << "1 " << vp[pos].fs << " L\n";
        else if (vp[pos].fs < 0)
            cout << "1 " << abs(vp[pos].fs) << " R\n";
        if (vp[pos].sc > 0)
            cout << "1 " << vp[pos].sc << " D\n";
        else if (vp[pos].sc < 0)
            cout << "1 " << abs(vp[pos].sc) << " U\n";

        cout << 3 << endl;
    }
}