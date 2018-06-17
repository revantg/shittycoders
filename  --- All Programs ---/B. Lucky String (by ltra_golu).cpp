#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n; 
    char a = 'a';
    for(int i = 0; i < n; i++)
    {
        if (i % 4 == 0) a = 'a';
        cout << a++;
    }
}