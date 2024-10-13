#include<bits/stdc++.h>
using namespace std;
int countofDivisiblePairs(int n, int m){
    int cnt = 0;
    for(int i = 1; i<=n; i++){
        for(int j = m; j>= 1; j--){
            if((i + j) % 5 == 0) cnt++;
        }
    }
    return cnt;
}
int main(){
    int n = 3; int m = 5;
    cout<<countofDivisiblePairs(n, m);
}