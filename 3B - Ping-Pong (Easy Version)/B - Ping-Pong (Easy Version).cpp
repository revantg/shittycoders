/* 
	3 B - Ping-Pong (Easy Version) 
	author : ltra_golu | submitted at : 2018-06-26 18:55:01
	time taken : 62 ms | memory consumed : 8 KB
*/
#include <iostream>
#include <vector> 
#include <algorithm>
using namespace std;

vector <pair<int,int> > v;
vector <bool> vis;

void dfs(int x)
{
	if (vis[x])		return;
	vis[x]=1;
	for (int i = 0; i < v.size(); i++)
	{
		if ((v[x].first>v[i].first&&v[x].first<v[i].second)
			||(v[x].second<v[i].second&&v[x].second>v[i].first))
		{

			dfs(i);
		}
	}
}

int main()
{
	int k;	cin>>k;
	int ctr=0;
	while (k--)
	{
		int f;	cin>>f;

		if (f==1)
		{
			int a,b;	cin>>a>>b;
			v.push_back(make_pair(a,b));
			ctr++;
		}
		else
		{
			vis.assign(ctr,0);
			int a,b;	cin>>a>>b;
			dfs(a-1);

			if (vis[b-1])
				cout<<"YES"<<endl;
			else
				cout<<"NO"<<endl;
		}

	}




	return 0;
}