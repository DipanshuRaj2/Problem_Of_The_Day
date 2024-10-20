#include<bits/stdc++.h>
using namespace std;
#include <bits/stdc++.h> 
vector<int> spiralPathMatrix(vector<vector<int>> matrix, int n, int m) 
{
    // Write your code here.
    vector<int>arr;
    int left = 0; int right = m - 1;
    int top = 0; int bottom = n - 1;
    int cnt = 0; 
    while(top <= bottom && left <= right){
        if(cnt == 0){ // left to right
            for(int i = left; i <= right; i++){
                arr.push_back(matrix[top][i]);
            }
            top++;
        } 
        if(cnt == 1){// right to buttom
            for(int i = top; i <= bottom; i++){
                arr.push_back(matrix[i][right]);
            }
            right--;
        }
        if(cnt == 2){// buttom to left
            for(int i = right; i>= left; i--){
                arr.push_back(matrix[bottom][i]);
            }
            bottom--;
        }
        if(cnt == 3){//left to top
            for(int i = bottom; i>=top; i--){
                arr.push_back(matrix[i][left]);
            }
            left++;
        }
        cnt++;
        if(cnt == 4){
            cnt  = 0;
        }
    }
    return arr;
}
int main(){
    vector<vector<int>>matrix = {{1, 2, 3, 4, 5, 6},{7, 8, 9, 10, 11, 12},{13, 14, 15, 16, 17, 18}};
    vector<int>ans = spiralPathMatrix(matrix, matrix.size(), matrix[0].size());
    for(int i = 0; i<ans.size(); i++){
        cout<<ans[i]<<", ";
    }
   return 0;
}