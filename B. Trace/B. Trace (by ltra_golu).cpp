#include<bits/stdc++.h>
#define pi 3.141592653589793
using namespace std;
int main()
{
    int n; cin>>n;
    double   area = 0;
    vector <int> v(n);
    for(int i = 0; i < n; i++)
        cin>>v[i];
    sort(v.begin(), v.end());
    for(int i = n - 1; i >= 0; i--){
        if (i % 2)
            area += pi * pow(v[i],2) ;
        else
            area -= pi * pow(v[i],2) ;
        }
    printf("%.8f", abs(area));
}