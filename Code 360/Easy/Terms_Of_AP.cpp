#include <bits/stdc++.h> 
using namespace std;
vector < int > termsOfAP(int x) {
    vector<int>ans;
    int N = 1;
    for(int i = 0; i<x; i++){
        int res = 3 * N + 2;
        if(res % 4 != 0){
            ans.push_back(res);
        }
        else{
            i--;
        }
        N++;
    }
    return ans;
}
int main(){
    vector<int>arr= termsOfAP(4);
    for(int i = 0; i<arr.size(); i++){
        cout<<arr[i] <<" ";
    }
    return 0;
}