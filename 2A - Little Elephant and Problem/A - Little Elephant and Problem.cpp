/* 
	2 A - Little Elephant and Problem 
	author : ltra_golu | submitted at : 2018-08-08 01:08:37
	time taken : 46 ms | memory consumed : 1572 KB
*/
#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define fs first
#define sc second
#define ll long long
#define vi vector <ll> 
#define vii vector <pair <ll, ll> >
#define hello ios::sync_with_stdio(false);
int main()
{
    hello
    ll n, c = 0; cin >> n;
    vi v1(n);
    for(int i = 0; i < n; i++) cin >> v1[i];
    vi v2(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    for(int i = 0; i < n; i++)
    {
        if (v1[i] != v2[i])c++;
        if (c >= 3) return cout << "NO", 0;
    }
    cout << "YES";
}