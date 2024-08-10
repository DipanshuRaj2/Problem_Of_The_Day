#include <bits/stdc++.h>
using namespace std;
static bool comparator(vector<int>&a, vector<int>&b){
    return a.back() < b.back();
}
void sortTuples(vector<vector<int>>&arr){
    // Write your code here
    sort(arr.begin(),arr.end(), comparator);
    for(int i = 0; i<arr.size(); i++){
        for(int j = 0; j<arr[i].size(); j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    vector<vector<int>>ans = {{1,2,3},{3,2,1},{4,5,6},{3,1,2}};
    sortTuples(ans);
    return 0;
}
