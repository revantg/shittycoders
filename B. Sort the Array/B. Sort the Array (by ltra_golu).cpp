#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n; cin>>n;
	int pos = 0;
	vector <int> v(n);
	for(int i = 0; i < n; i++) cin>>v[i];

	for(int i = 0; i < n - 1; i++) {
		if (v[i+1] < v[i]){
			pos = i;
			break;
		}
	}
	int i = pos;
	while(v[i+1] < v[i] and i < n - 1) i++;

	for(int i2 = i; i2 < n-1; i2++){
		if (v[i2+1] < v[i2]) {
			cout<<"no";
			return(0);
		}
	}

	if (i+1 < n and pos > 0) {
		if (v[pos] < v[i+1] and v[i] > v[pos - 1])
			cout<<"yes\n"<<pos+1<<" "<<i+1;
		else
			cout<<"no";
	}
	else if (i+1 < n and pos == 0){
		if (v[pos] < v[i+1])
			cout<<"yes\n"<<pos+1<<" "<<i+1;
		else
			cout<<"no";
	}
	else if (i+1 == n and pos > 0) {
		if (v[pos - 1] < v[i])
			cout<<"yes\n"<<pos+1<<" "<<i+1;
		else
			cout<<"no";

	}
	else if (i + 1 == n and pos == 0){
		cout<<"yes\n"<<pos+1<<" "<<i+1;
	}
	else
		cout<<"no";

}
