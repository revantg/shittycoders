#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n; cin>>n;
    long int sum = 0;
    vector <pair <int , int>> v(n);
    vector <pair<int , int>> colour(n);
    vector <pair<int , int>> matches(n);

    for(int i = 0; i < n; i++){
      cin>>v[i].first>>v[i].second;
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n ; j++)
            if (j!=i){
            if (matches[i].first + matches[i].second == (n-1)*2 || matches[j].first + matches[j].second == (n-1)*2) continue;

            if (v[i].first != v[j].second){
                colour[i].first++;
                colour[j].second++;
            }
            else if(v[i].first == v[j].second){
                colour[j].first++;
                colour[i].first++;
            }
            matches[i].first++;
            matches[j].second++;
            sum += 2;

            if (sum == n*(n-1)*2){
                for(int k = 0; k < n; k++)
                    cout<<colour[k].first<<" "<<colour[k].second<<endl;
                return(0);
            }

            if (matches[i].first + matches[i].second == (n-1)*2 || matches[j].first + matches[j].second == (n-1)*2) continue;

            if (v[j].first != v[i].second){
                colour[i].second++;
                colour[j].first++;
            }
            else if(v[j].first == v[i].second){
                colour[i].first++;
                colour[j].first++;
            }
            matches[i].second++;
            matches[j].first++;

            sum += 2;

            if (sum == n*(n-1)*2){
                for(int k = 0; k < n; k++)
                    cout<<colour[k].first<<" "<<colour[k].second<<endl;
                return(0);
            }

            // for(int k = 0; k < n; k++)
            //     cout<<matches[k].first + matches[k].second<<endl;
            // cout<<endl;
            // matches[i].first+=2;
            // matches[j].second+=2;
      }
  }

    cout<<sum;
}
