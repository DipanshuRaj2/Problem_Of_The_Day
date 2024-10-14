#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxiIdx(vector<int>& arr) {
        int maxidx = -1;
        int maxi = INT_MIN;
        for (int i = 0; i < arr.size(); i++) {
            if (maxi <= arr[i]) {
                maxi = arr[i];
                maxidx = i;
            }
        }
        return maxidx;
    }
    long long maxKelements(vector<int>& nums, int k) {
        long long score = 0;
        while (k != 0) {
            int idx = maxiIdx(nums);
            score += nums[idx];
            nums[idx] = ceil(nums[idx] / 3.0);
            k--;
        }
        return score;
    }
};
int main(){
    Solution* sol = new Solution();
    vector<int>arr = {1,10,3,3,3};
    int k = 3;
    cout<<sol->maxKelements(arr, k);
   return 0;
} 