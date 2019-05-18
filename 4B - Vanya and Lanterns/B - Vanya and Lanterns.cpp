/* 
	4 B - Vanya and Lanterns 
	author : ltra_golu | submitted at : 2018-04-06 20:47:24
	time taken : 31 ms | memory consumed : 3500 KB
*/
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
// 46 615683844
// 431749087 271781274 274974690 324606253 480870261 401650581 13285442 478090364 266585394 425024433 588791449 492057200 391293435 563090494 317950 173675329 473068378 356306865 311731938 192959832 321180686 141984626 578985584 512026637 175885185 590844074 47103801 212211134 330150 509886963 565955809 315640375 612907074 500474373 524310737 568681652 315339618 478782781 518873818 271322031 74600969 539099112 85129347 222068995 106014720 77282307
