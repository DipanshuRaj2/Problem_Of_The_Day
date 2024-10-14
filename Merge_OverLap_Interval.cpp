#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>merge(vector<vector<int>>&intervals){
    int n = intervals.size();
    sort(intervals.begin(), intervals.end());
    vector<vector<int>>ans;
    for(int i = 0; i<n; i++){
        if(ans.empty() || intervals[i][0] > ans.back()[1]){
            ans.push_back(intervals[i]);
        }
        else{  
            ans.back()[1] = max(intervals[i][1], ans.back()[1]);
        }
    }
    return ans;
}
int main(){
    vector<vector<int>>arr = {{1,3}, {2,6}, {4,7}, {11, 15}, {14, 18}};
    arr = merge(arr);
    for(int i = 0; i<arr.size(); i++){
        cout<<"{";
        for(int j = 0; j<arr[i].size();j++){
            cout<<arr[i][j]<<",";
        }
        cout<<"}";
    }

    return 0;
}
