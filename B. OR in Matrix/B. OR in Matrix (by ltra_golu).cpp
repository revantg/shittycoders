#include <bits/stdc++.h>
using namespace std;
int main()
{
    long int m, n;
    cin >> m >> n;
    long int a[m][n], b[m][n], c[m][n], zero = 0, onei = 0, onef = 0;
    map<int, int> row;
    map<int, int> col;
    map<int, int> row2;
    map<int, int> col2;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
        {
            cin>>a[i][j];
            if (a[i][j] == 0)
            {
                row[i] = 1;
                col[j] = 1;
            }
        }
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
        {
            if (row[i] + col[j] >= 1)
                b[i][j] = 0;
            else
            {
                b[i][j] = 1;
                row2[i] = 1;
                col2[j] = 1;
            }
        }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (row2[i] + col2[j] >= 1)
                c[i][j] = 1;
            else
                c[i][j] = 0;
        }
    }
    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++)
            if (a[i][j] != c[i][j]){
                cout<<"NO";
                return(0);
            }
    cout<<"YES"<<endl;
    for(int i = 0; i< m; i++)
    {
        for(int j = 0; j < n; j++)
            cout<<b[i][j]<<" ";
        cout<<endl;
    }
}
