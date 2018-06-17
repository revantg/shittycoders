#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    int temp;
    vector <int> v1;int sum1 = 0;
    vector <int> v2;int sum2 = 0;
    for(int i = 0; i < n; i++) {
        cin>>temp;
        if (temp > 0){
            v1.push_back(temp);
            sum1 += temp;
        }
        else if (temp < 0){
            v2.push_back(abs(temp));
            sum2 += abs(temp);
        }
    }   
    if (sum1 > sum2){
        cout<<"first";
        return(0);
    }
    else if (sum1 < sum2){
        cout<<"second";
        return(0);
    }
    if (v1.size() < v2.size()) {
        cout<<"second"<<v1.size()<<" "<<v2.size();
        return(0);
    }
    else if (v1.size() > v2.size()) {
        cout<<"first";
        return(0);
    }
    else {
        int i = 0, j = 0;
        while(i < v1.size() and j < v2.size())
        {
            // cout<<"looping";
            if (v1[i] < v2[j]) {
                cout<<"second";
                return(0);
            }
            else if (v1[i] > v2[j]) {
                cout<<"first";//<<v1[i]<<v2[j];
                return(0);
            }
            else {
                i++;
                j++;
            }
        }
    }
    cout<<"second";
}
