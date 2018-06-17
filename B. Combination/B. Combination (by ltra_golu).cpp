#include<bits/stdc++.h>
using namespace std;

bool sortinrev(const pair<int,int> &a, 
               const pair<int,int> &b)
{
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
    for(auto temp : cards) {
        count += temp.first;
        points += temp.second;
        count--;
        if (count <= 0) break;
    }
    cout << points;
}