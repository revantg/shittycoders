#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, k; cin>>n>>k;
	vector <long int> lectures(n);
	vector <long int> sleep(n);
	vector <long int> sumarray(n);

	long int sum = 0, maxl = 0, attended_lectures = 0, pos;

	for(int i = 0; i < n; i++){
		cin>>lectures[i];
		sumarray[i] = sum;
	}
	for(int i = 0; i < n; i++) {
		cin>>sleep[i];
		if (sleep[i] == 0){ sum += lectures[i]; sumarray[i] = sum ;}
		if (sleep[i]) attended_lectures += lectures[i];
	}
	// for(auto v : sumarray) cout<<v<<" ";
	// cout<<endl;
	for(int i = 0; i <= n - k; i++) {
		if (sleep[i] == 0){
			if (i == 0){
				maxl = sumarray[i+k-1];
				pos = 0;
			}
			else
			{
				if (sumarray[i+k-1] - sumarray[i-1] > maxl){
					maxl = sumarray[i+k-1] - sumarray[i-1];
					pos = i;
				}
			}
		}
	}
	cout<<attended_lectures+maxl;
}
