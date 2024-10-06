// you have to count the number of 3 in the 1 to n;

#include <bits/stdc++.h>
using namespace std;
int count3s(int n){
    int cnt = 0;
    for(int i = 1; i<=n; i++){
        int ele = i;
        while(ele != 0){
           
            int digit = ele % 10;
            if(digit == 3) cnt++;
            ele = ele /10;
        }
    }
    return cnt;
}
int main()
{
    int n = 10;
    cout<<count3s(n);
    return 0;
}
