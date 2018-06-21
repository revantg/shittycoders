#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k; 
    cin >> n >> k;
    vector <int> v(n);
    for(int i = 0; i < n; i++)
        cin >> v[i];
    
    int left = 0, lcount = 0, rcount = 0, right = n -1;
    while(1)
    {
        if (v[left] <= k)
            left++, lcount++;
        else 
            break;
    }
    while(1)
    {
        if (v[right] <= k and right > 0)
            right--, rcount++;
        else 
            break;
    }
    if (lcount + rcount <= n)
        cout << lcount + rcount;
    else
        cout << (lcount + rcount - n);

}