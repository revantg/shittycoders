/* 
	4 C - Gargari and Bishops 
	author : ltra_golu | submitted at : 2018-08-01 23:35:44
	time taken : 1122 ms | memory consumed : 15684 KB
*/
#include<iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
   
    long long int d1[2*n] ={0}, d2[2*n] = {0};
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            d1[n-1 + i-j] += a[i][j];
            d2[i+j] += a[i][j];
        }
    }
    long long int max1 =0,max2 = 0;
    int x1[2] = {1,1}, x2[2] = {2,1};
    for(int i=0; i<n;i++){
        for(int j =0 ;j<n;j++){
            if((i+j)%2 == 0 && d1[n-1 +i-j] + d2[i+j] - a[i][j] > max1){
                max1 = d1[n-1 +i-j] + d2[i+j] - a[i][j];
                x1[0] = i+1;
                x1[1] = j+1;
            }
            else if((i+j)%2 != 0 && d1[n-1 +i-j] + d2[i+j] - a[i][j] > max2){
                max2 = d1[n-1 +i-j] + d2[i+j] - a[i][j];
                x2[0] = i+1;
                x2[1] = j+1;
            }
        }
    }
    cout<<max1 + max2<<endl<<x1[0]<<" "<<x1[1]<<" "<<x2[0]<<" "<<x2[1]<<" ";
    return 0;
}