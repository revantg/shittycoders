#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int l, n; cin>>l>>n;
	long long int temp, small;
	float maxm;
	set <long long int> s1;
	map <long long int , int> v;

	for(long long int i = 0; i < l; i++) {
		cin>>temp;
		s1.insert(temp);
		v[temp] = 1;
	}

	vector <long long int> elements(s1.begin(), s1.end());
	small = elements[0];
	// maxm = max(float(small/2) , float((n - elements[s1.size() -1])/2 ));
	maxm = max(small, n - elements[s1.size() -1]) ;
	// cout<<maxm<<endl;

	for(long long int i = 0; i < s1.size() - 1; i++){
		maxm = max(float(maxm) , float((elements[i+1] - elements[i]))/2);
		// cout<<float((elements[i+1] - elements[i]))/2<<" ";
	}
	// cout<<endl;
	printf("%.10f" , maxm);
}
