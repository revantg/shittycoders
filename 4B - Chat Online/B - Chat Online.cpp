/* 
	4 B - Chat Online 
	author : ltra_golu | submitted at : 2018-04-12 02:50:39
	time taken : 31 ms | memory consumed : 3436 KB
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int p, q, l, r;
    cin >> p >> q >> l >> r;
    vector<pair<int, int> > ptime(p);
    vector<pair<int, int> > qtime(q);

    for (int i = 0; i < p; i++)
        cin>>ptime[i].first>>ptime[i].second;

    for (int i = 0; i < q; i++)
        cin >> qtime[i].first >> qtime[i].second;

    int count = 0, flag = 0;
    for(int i = l; i <= r; i++) {
        flag = 0;
        for(int j = 0; j < p and flag == 0; j++) {
            for(int k = 0; k < q  and flag == 0; k++){
                int t1 = qtime[k].first + i;
                int t2 = qtime[k].second + i;
                // if (t1 <= ptime[j].second and qtime[k].first + i >= ptime[j].first)
                if ((t1 <= ptime[j].second and t2 >= ptime[j].first) or (t2 >=ptime[j].first and t2 <= ptime[j].second)){
                    count++;
                    flag = 1;
                    // cout<<"Working for t "<<i<<" and 1 - "<<qtime[k].first<<" , 2 - "<<qtime[k].second<<endl;
                }
            }
        }
    }
    cout<<count;
}