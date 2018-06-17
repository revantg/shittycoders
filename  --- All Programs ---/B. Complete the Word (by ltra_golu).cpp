#include <bits/stdc++.h>
using namespace std;
int main()
{
	string str; cin>>str;

	if (str.length() < 26) { cout<<"-1"; return(0);	}

	map <int , int> m;
	for(char s : str) m[int(s)]++;

	vector <char> v;
	for(int i = 65; i <= 90; i++) {
		if (m[i] == 0){
			v.push_back(char(i));
			// cout<<char(i);
		}
	}
	if (m['?'] != v.size()) cout<<"-1";
	/*
	vector <char> ::iterator it = v.begin();
	for(int i = 0; i < str.length(); it++) {
		if (str[i] == '?') {
			str[i] = *it;
			it++;
			if (it == v.end()) {
				cout<<"-1";
				return(0);
			}
		}
	}*/
}
