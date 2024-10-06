#include<bits/stdc++.h>
using namespace std;
bool checkP(int num){
     int res = 0;
     int num1 = num;
        while(num != 0){
            int l = num % 10;
            res =  l + res * 10;
            num/= 10;
        }
       
        if(res == num1) return true;
        return false;
}
int main(){
    cout<<checkP(121);
 return 0;
 }