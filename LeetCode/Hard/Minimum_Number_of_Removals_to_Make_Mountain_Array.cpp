#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minimumMountainRemovals(vector<int>& nums) {
        int n =  nums.size();
        int maxi = 0; 
        vector<int>LIS(n, 1);  //longest increasing subsequence;
        vector<int>LDS(n, 1); //Longest decreasing subsequence;

        for(int i = 0; i<n; i++){
            for(int j = i - 1; j>= 0; j--){
                if(nums[j] < nums[i]){
                  LIS[i] = max(LIS[i], LIS[j]+1);
                }
            }
        }
        for(int i = n-1; i >= 0; i--){
            for(int j = i+1; j < n; j++){
                if(nums[i] > nums[j]){
                    LDS[i] = max(LDS[i], LDS[j]+1);
                }
            }
        }

        int minRemovals = n;
        for(int i = 0; i < n; i++){
            if(LIS[i] > 1 && LDS[i] > 1)
            minRemovals = min(minRemovals, n - LIS[i] - LDS[i] + 1);
        }
        return minRemovals;
    }
};
int main(){
    vector<int>nums = {2,1,1,5,6,2,3,1};
    Solution* sol = new Solution();
    cout << sol->minimumMountainRemovals(nums);
}