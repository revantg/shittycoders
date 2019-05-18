/* 
	4 B - Football Kit 
	author : ltra_golu | submitted at : 2018-04-10 21:03:22
	time taken : 732 ms | memory consumed : 6972 KB
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, count = 0; //, sum_home = 0, sum_away = 0;
    cin >> n;
    vector<pair<int, int>> team(n);
    map<int, int> home_colour;
    for (int i = 0; i < n; i++)
    {
        cin >> team[i].first >> team[i].second;
        home_colour[team[i].first]++;
    }
    for (int i = 0; i < n; i++)
    {
        cout << n - 1 + home_colour[team[i].second] << " " << n - 1 - home_colour[team[i].second] << endl;
    }
}