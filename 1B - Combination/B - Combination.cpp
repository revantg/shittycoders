/* 
	1 B - Combination 
	author : ltra_golu | submitted at : 2018-05-31 07:20:40
	time taken : 62 ms | memory consumed : 3292 KB
*/
#include<bits/stdc++.h>
using namespace std;

bool sortinrev(const pair<int,int> &a, 
               const pair<int,int> &b)
{
    //    return (a.first > b.first);
       if (a.first > b.first) return(1);
       if (a.first == b.first)
            if (a.second > b.second) return (1);
            else return (0);
        else return(0);
}
 
int main()
{
    int n, a, b; cin >> n;
    vector <pair <int, int>> cards;
    while (n--) {
        cin >> a >> b;
        cards.push_back(make_pair(b, a));
    }
    int count = 1, points = 0;
    sort(cards.begin(), cards.end(), sortinrev);
    // cout<<endl;
    for(auto temp : cards) {
        // cout << temp.second <<" "<<temp.first << endl;
        count += temp.first;
        points += temp.second;
        count--;
        if (count <= 0) break;
    }
    cout << points;
}