#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m, n; cin >> m >> n;
    int count = 0;
    vector <vector<char>> a(m+2, vector<char>(n+2, '0'));
    for(int  i = 1; i <= m; i++)
        for(int j = 1; j <= n; j++)
            cin >> a[i][j];

    for(int i = 1; i <= m; i++){
        for(int j = 1; j <= n; j++){
            if (a[i][j] == 'P'){
                if (a[i+1][j] == 'W'){
                    count++;
                    a[i+1][j] = '.';
                }
                else if (a[i][j+1] == 'W'){
                    count++;
                    a[i][j+1] = '.';
                }
                else if (a[i][j - 1] == 'W')
                {
                    count++;
                    a[i][j - 1] = '.';
                }
                else if (a[i-1][j] == 'W')
                {
                    count++;
                    a[i - 1][j] = '.';
                }
            }
                
        }
    }
    cout<<count;
}