/* 
	4 A - Game With Sticks 
	author : ltra_golu | submitted at : 2018-06-01 00:20:00
	time taken : 30 ms | memory consumed : 3284 KB
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
   int n,m;
   cin>>n>>m;
   int z = min(m,n);
   if(z%2==0){
       cout<<"Malvika";
   }
   else{
       cout<<"Akshat";
   }
}