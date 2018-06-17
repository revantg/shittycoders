#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s; cin>>s;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    for(auto c : s){
        if (c == 'a' or c == 'e' or c == 'i' or c == 'o' or c == 'u' or c == 'y')
            cout<<"";
        else 
            cout<<"."<<c;
    }
}

