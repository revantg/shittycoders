#include <bits/stdc++.h>
using namespace std;
int main()
{
	long int n, k, words, temp; cin>>n>>k>>words;
	long int total_cost = 0;
	vector <string> v(n);
	vector <string> sentence(words);
	vector <long int> cost(n);
	map <string, long int> m;

	for(int i = 0; i < n; i++) cin>>v[i];
	for(int i = 0; i < n; i++) cin>>cost[i];

	for(int i = 0; i < k; i++) {
		long int x; cin>>x;
		if (x == 1) continue;
		vector <long int> same_elements(x);
		cin>>temp;
		long int lowest_cost = cost[temp-1];
		for(long int j = 1; j < x; j++){
			cin>>temp;temp--;
			same_elements[j] = temp;
			if (lowest_cost > cost[temp]) lowest_cost = cost[temp];
		}
		for(long int k = 0; k < x; k++){
			cost[same_elements[k]] = lowest_cost;
		}
	}
	for(long int i = 0; i < n; i++)
		m[v[i]] = cost[i];
	for(long int i = 0; i < words; i++) {
		cin>>sentence[i];
		total_cost += m[sentence[i]];
	}
	cout<<total_cost;
}
