#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int longestSquareStreak(vector<int>& nums) {
        //count the perfect square;
        int maxStreak = -1;
        sort(nums.begin(), nums.end());
       unordered_map<int, int>ump; // nums[i] , cnt the streak
        for(auto num : nums){
            int root = sqrt(num);
            if(root * root == num && ump.find(root) != ump.end()){
                ump[num] = ump[root]+1;
            }
            else{
                ump[num] = 1;
            }
            maxStreak = max(maxStreak, ump[num]);
        }
        return maxStreak < 2 ? -1 : maxStreak;
    }
};
int main(){
    vector<int>nums = {4,3,6,16,8,2};
    Solution sol;
    cout << sol.longestSquareStreak(nums);
   return 0;
}