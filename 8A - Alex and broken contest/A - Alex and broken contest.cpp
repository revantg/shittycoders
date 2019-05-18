/* 
	8 A - Alex and broken contest 
	author : ltra_golu | submitted at : 2018-10-01 14:46:53
	time taken : 31 ms | memory consumed : 244 KB
*/
#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define fs first
#define sc second
#define bg begin
#define ll long long
#define vi vector<ll>
#define vii vector<pair<ll, ll>>
#define mii map<ll, ll>
#define vii vector<pair<ll, ll>>
#define hello ios::sync_with_stdio(false);

int main()
{
    hello
        string s;
    cin >> s;
    ll c = 0;
    string str[] = {"Danil", "Olya", "Slava", "Ann", "Nikita"};

    for (int i = 0; i < 5; i++)
    {
        int count = 0;
        size_t nPos = s.find(str[i], 0); // first occurrence
        while (nPos != string::npos)
        {
            count++;
            nPos = s.find(str[i], nPos + 1);
        }
        if (count > 1)return cout << "NO", 0;
        else if (count == 1)c++;
    }
    if (c > 1 or c == 0)
        cout << "NO";
    else
        cout << "YES";
}