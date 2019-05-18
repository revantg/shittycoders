/* 
	3 B - Dima and To-do List 
	author : ltra_golu | submitted at : 2018-05-31 16:30:27
	time taken : 139 ms | memory consumed : 3656 KB
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k,p;
	long long s=1e9;
	cin>>n>>k;
	int a[n+10];
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=k;i++){
			long long sum=0;
		for(int j=1;j<=n/k;j++) sum+=a[i+(j-1)*k];
		if(sum<s) {
				s=min(s,sum);
		p=i;
		}
	}
	cout<<p<<endl;
}