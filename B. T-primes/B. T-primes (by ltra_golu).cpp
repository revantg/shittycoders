#include <bits/stdc++.h>
using namespace std;
int main()
{
	long int n; cin>>n;
	long int temp;
	long int root;
	int flag = 0 ;
	while (n--) {
		flag = 0;
		cin>>temp;
		if (temp != pow(int(sqrt(temp)) , 2)) cout<<"NO"<<endl;
		else {
			root = int(sqrt(temp));
			if (root == 1) flag = 1;
			if (root % 2 == 0 and root != 2	)
				flag = 1;
			else
				for(int i = 3; i <= int(sqrt(root)); i+=2) {
					if (root % i == 0) {
						flag = 1;
						break;
					}
				}
			if (flag == 0) cout<<"YES";
			else cout<<"NO";
			cout<<endl;
		}
	}
}
