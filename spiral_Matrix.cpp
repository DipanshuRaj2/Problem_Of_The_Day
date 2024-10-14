#include <bits/stdc++.h> 
using namespace std;
int findKthElement(vector<vector<int>> matrix, int k) {
    // Write your code here.
    int n = matrix.size();
    int m = matrix[0].size();

    int top = 0;
    int bottom = n-1;
    int left = 0;
    int right = m-1;

    vector<int>ans;
    int dir = 0; 
    while(top <= bottom && left <= right){
    if(dir == 0){
    for(int i = left; i<=right; i++){
    
        ans.push_back(matrix[top][i]);
      }
      top++;
    }
    if(dir == 1){

      for (int i = top; i <= bottom; i++) {
        ans.push_back(matrix[i][right]);
      }
      right--;
    }
    if(dir == 2){
        for(int i = right; i>= left; i--){
            ans.push_back(matrix[bottom][i]);
        }
        bottom--;
    }
    if(dir == 3){
        for (int i = bottom; i >= top; i--) {
            ans.push_back(matrix[i][left]);
        }
        left++;
     }
     dir++;
     if(dir == 4) dir = 0;
    }
    for(int i = 0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    return ans[k];
}
int main(){
    vector<vector<int>>matrix = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{7,9,2,1}};
    int k = 8;
    cout<<findKthElement(matrix,k);
    return 0;
}
//