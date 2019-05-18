/* 
	4 B - Suffix Structures 
	author : ltra_golu | submitted at : 2018-04-09 23:59:07
	time taken : 15 ms | memory consumed : 3440 KB
*/
//Copy kiya hai ye question
#include <bits/stdc++.h>
using namespace std;
int main(){
    int i, m=0;
    string s, t, rS, rT;
    cin >> s;
    cin >> t;
    rS = s; rT = t;
    bool isAuto=true, isArr=true;
    if(s.length() < t.length()){
        isAuto=false;
        isArr=false;
    }else if(s.length() == t.length()) {
        isAuto=false;
        for(i=0; i<s.length(); i++){
            for(int j=0; j<rT.length(); j++){
                if(s[i]==rT[j]){
                    m++;
                    rT[j] = 0;
                    break;
                }
            }
        }
        if(m==s.length()){
            isArr=true;
        }else{
            isArr=false;
        }
    }else{
        m=0;
        for(int i=0; i<rT.length(); i++){
            for(int j=0; j<rS.length(); j++){
                if(rT[i]==rS[j]){
                    rS[j]=0;
                    m++;
                    break;
                }
            }
        }
        if(m==t.length()){
            isAuto=true;
            int prevI=-1, count=0;
            rS=s; rT=t;
            for(int i=0; i<rT.length(); i++){
                for(int j=0; j<rS.length(); j++){
                    if(rT[i]==rS[j] && j>prevI){
                        prevI = j;
                        rS[j]=0;
                        count++;
                        break;
                    }
                }
            }
            if(count==t.length()){
                isArr=false;
            }else{
                isArr=true;
            }
        }else{
            isArr=false;
            isAuto=false;
        }
    }
    
    if(isAuto && isArr){
        cout << "both" << endl;
    }else if(isAuto && !isArr){
        cout << "automaton" << endl;
    }else if(!isAuto && isArr){
        cout << "array" << endl;
    }else if(!isAuto && !isArr){
        cout << "need tree" << endl;
    }
}