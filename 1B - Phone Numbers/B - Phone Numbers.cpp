/* 
	1 B - Phone Numbers 
	author : ltra_golu | submitted at : 2018-06-14 23:33:25
	time taken : 31 ms | memory consumed : 156 KB
*/
#include <bits/stdc++.h>
using namespace std;
int analyse(string x)
{
    string y;
    int tc = 0;
    for (int i = 0; i < x.length(); i++)
        if (x[i] != '-')
            y += x[i];
    for (int i = 0; i < y.length() - 1; i++)
    {
        if (int(y[i]) < int(y[i + 1]))
            return (3);
        if (y[i] == y[i + 1])
            tc++;
    }
    if (tc == y.length() - 1)
        return (2);
    else if (tc > 0)
        return 3;
    else
        return 1;
}
int main()
{
    int num;
    cin >> num;
    vector<vector<int>> v(num, vector<int>(3));
    string temp;
    vector<string> name(num);
    for (int i = 0; i < num; i++)
    {
        int n;
        cin >> n;
        cin >> name[i];
        for (int j = 0; j < n; j++)
        {
            cin >> temp;
            v[i][analyse(temp) - 1]++;
        }
    }
    // cout << endl << endl;
    // for(int i = 0; i < num; i++)
    // {
    //     for(int j = 0; j < 3; j++)
    //         cout << v[i][j] <<" ";
    //     cout << endl;
    // }
    int mx1 = 0, mx2 = 0, mx3 = 0;
    string s1, s2, s3;
    for (int i = 0; i < num; i++)
    {
        if (v[i][0] > mx1)
            mx1 = v[i][0];
        if (v[i][1] > mx2)
            mx2 = v[i][1];
        if (v[i][2] > mx3)
            mx3 = v[i][2];
    }
    // cout << "mx - " << mx1 << " " << mx2 << " "<<mx3<<endl;
    // return(0);
    for (int i = 0; i < num; i++)
    {
        if (v[i][0] == mx1)
            s1 += name[i] + ", ";
        if (v[i][1] == mx2)
            s2 += name[i] + ", ";
        if (v[i][2] == mx3)
            s3 += name[i] + ", ";
    }
    s1 = s1.substr(0, s1.length() - 2) + ".";
    s2 = s2.substr(0, s2.length() - 2) + ".";
    s3 = s3.substr(0, s3.length() - 2) + ".";
    // cout << s1 <<endl << s2 << endl << s3;
    cout << "If you want to call a taxi, you should call: " << s2 << endl;
    cout << "If you want to order a pizza, you should call: " << s1 << endl;
    cout << "If you want to go to a cafe with a wonderful girl, you should call: " << s3 << endl;
}