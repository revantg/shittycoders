/* 
	1 A - Elevator or Stairs? 
	author : ltra_golu | submitted at : 2018-10-18 20:18:39
	time taken : 31 ms | memory consumed : 12 KB
*/
#include <bits/stdc++.h>
using namespace std;

#define                       pb push_back
#define                       mp make_pair
#define                           fs first
#define                          sc second
#define                           bg begin
#define                       ll long long
#define                     vi vector <ll>
#define                       sll set <ll>
#define             uos unordered_set <ll>
#define        vii vector <pair <ll, ll> >
#define                 mii map < ll, ll >
#define        vii vector <pair <ll, ll> >
#define  hello ios::sync_with_stdio(false);

int main()
{
    hello
    ll lt = 0, x, y, z, t1, t2, t3, st = 0; cin >> x >> y >> z >> t1 >> t2 >> t3;
    if (x == y) return cout << "NO", 0;
    lt = abs(z - x) * t2;
    lt += 2*t3;
    lt += abs(x - y) * t2;
    lt += t3; 

    st = t1 * abs(x - y);
// cout << lt << st; return 0;
    if (lt <= st) cout << "YES";
    else cout << "NO";
}