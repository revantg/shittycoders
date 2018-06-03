#include <bits/stdc++.h>
using namespace std;
int main()
{
	long int n; cin>>n;
	int temp, first, last, mid;;
	vector <int> prices(n);
	map <int , int> freq;
	for(int i = 0; i < n; i++) cin>>prices[i];
	sort(prices.begin(), prices.end());
	for(int i = 0; i < n; i++) freq[prices[i]] = i;

	long int q; cin>>q;
	while(q--) {
		cin>>temp;//cout<<endl;
		// cout<<"Input ->";
		first = 0;
		last = n-1;
		if (temp < prices[0]) cout<<"0";
		else {
			while(first <= last){
				mid = first + last; mid /= 2;
				if (prices[mid] == temp)
					break;
				else if (prices[mid] < temp)
					first = mid + 1;
				else
					last = mid - 1;
			}
			if (prices[mid] == temp)
				cout<<freq[prices[mid]] + 1;
			else
				cout<<freq[prices[mid]];

			// cout<<freq[prices[mid]]+1<<" "<<prices[mid]<<endl;
		}
		cout<<endl;
	}
}
//[2, 8, 6, 3, 9]
//[2, 3, 6, 8, 9]


//868 987 714 168 123
//123 168 714 868 987
// 1 3 4 5 7 8 10
// 0 1 2 3 4 5 6
