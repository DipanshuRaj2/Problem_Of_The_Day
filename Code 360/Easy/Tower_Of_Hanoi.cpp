#include<bits/stdc++.h>
using namespace std;
void solve(int n, int src, int aux, int des, vector<vector<int>>&ans){
    if(n == 1){
        ans.push_back({src, des});
        return;
    }
    solve(n-1, src, des, aux, ans);  // assume one length of disc we just put src to des;
    ans.push_back({src, des});
    solve(n-1, aux, src, des, ans); // suppose 
}
vector<vector<int>> towerOfHanoi(int n){
    vector<vector<int>>ans;
    int src = 1; int aux = 2; int des = 3;
    solve(n, src, aux, des, ans);
    return ans;
}
int main(){
    int n = 2;
    vector<vector<int>>ans = towerOfHanoi(n);
    for(auto ele : ans){
        cout<<"{";
        for(auto i : ele){
            cout<<i<<",";
        }
        cout <<"}";
    }
 return 0;
 }