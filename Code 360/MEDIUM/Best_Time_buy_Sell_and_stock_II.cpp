#include <bits/stdc++.h>
using namespace std;
long maxPrices(long *values, int n){
    long prices = 0;
    for(int i = 1; i<n; i++){
        if(values[i-1] < values[i]){
            prices += values[i] - values[i-1];
        }
    }
    return prices;
}
int main()
{
    long prices[6]= {7,1,5,3,6,4};
    cout<<maxPrices(prices, 6);

    return 0;
}