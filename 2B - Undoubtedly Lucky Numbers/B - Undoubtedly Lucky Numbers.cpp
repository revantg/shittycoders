/* 
	2 B - Undoubtedly Lucky Numbers 
	author : ltra_golu | submitted at : 2018-07-08 07:17:03
	time taken : 62 ms | memory consumed : 1452 KB
*/
#include <bits/stdc++.h>
using namespace std;
set<int> s;
int n;
int main()
{
	cin >>n;
	if (n==1e9) s.insert(n);
	for (int i=0;i<10;i++)
	{
		for (int j=i;j<10;j++)
		{
			for (int k=1;k<10;k++)
			{
				for (int t=0;t<(1<<k);t++)
				{
				    int r=0;
					for (int it=0;it<k;it++)
					{
						if (t & (1<<it)) r=r*10+i;
						else r=r*10+j;
					}
					if (r<=n) s.insert(r);
				}
			}
		}
	}
	cout <<s.size()-1;
	return 0;
}

