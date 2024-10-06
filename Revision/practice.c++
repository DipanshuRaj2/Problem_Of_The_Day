#include<bits/stdc++.h>
using namespace std;
bool checkNum(int num){
   
    int n2 = num;
    int ans = 0;
    while(n2!= 0){
        int last = n2 % 10;
        ans = ans * 10 + last;
        n2/= 10;
    }
    cout<< ans<<endl;
    if(ans == n1){
        return true;
    }
    return false;
}
int main(){
    int num = 4321;
    cout<<checkNum(num);
 return 0;
 }