/* 
	1 C - Another Problem on Strings 
	author : ltra_golu | submitted at : 2018-09-26 20:22:36
	time taken : 92 ms | memory consumed : 13860 KB
*/
    #include <bits/stdc++.h>
    using namespace std;

    #define                       pb push_back
    #define                       mp make_pair
    #define                           fs first
    #define                          sc second
    #define                           bg begin
    #define                       ll long long
    #define                     vi vector <ll>
    #define        vii vector <pair <ll, ll> >
    #define                 mii map < ll, ll >
    #define        vii vector <pair <ll, ll> >
    #define  hello ios::sync_with_stdio(false);

    int main()
    {
        hello
        ll k; cin >> k;
        string s; cin >> s;
        ll n = s.length();
        vi v; v.pb(0);
        for(int i = 0; i < n; i++)
        {
            if (s[i] == '1')v.pb(i + 1);
        }v.pb(n+1);
        if (k == 0) 
        {
            ll count = 0, sum = 0;
            for(int i = 0; i < s.length(); i++)
            {
                if (s[i] == '0')count++;
                else sum += count * (count + 1) / 2, count = 0;
            }
            sum += count * (count + 1) / 2;
            return cout << sum , 0;
        }
        ll z = 1;
        ll l, r, sum = 0;
        // for(auto x : v) cout << x << " ";
        // cout << endl;
        while(z + k < v.size())
        {
            l = v[z] - v[z - 1];
            r = v[z + k] - v[z + k - 1];
            // cout << l << r << endl;
            // return 0;
            sum += l * r;
            z++;
        }
        cout << sum;
    }