#include <bits/stdc++.h>
using namespace std;
int totalSteps(int n, int k, vector<int> &flowers) {
    int steps = 0;
    int totalSteps = 0;
    int waterTank = k;
    for(int i = 0; i<n; i++){
        if(flowers[i] <= k){
            steps++;
            k = k - flowers[i];
        }
        else{
            steps = i*2+1;
            k = waterTank;
            k = k - flowers[i];
        }
        totalSteps += steps;
        steps = 0;
    }
    return totalSteps;
}
int main()
{
    vector<int>arr = {1 ,1 ,1 ,1 ,1};
    int n = arr.size();
    cout<<totalSteps(n, 1, arr);
    return 0;
}