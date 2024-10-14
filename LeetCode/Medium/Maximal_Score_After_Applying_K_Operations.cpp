// leetcode = 2530
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:

    //brute force 
    // I am choosing the greatest element in every time and after that I am doing kth opertion
    int maxiIdx(vector<int>& arr) { //maxIdx
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
    long long maxKelements(vector<int>& nums, int k) { //doing kth operations
        long long score = 0;
        while (k != 0) {
            int idx = maxiIdx(nums);
            score += nums[idx];
            nums[idx] = ceil(nums[idx] / 3.0);
            k--;
        }
        return score;
    } 
    //brute force end;

    //optimal approach
    //1. i am using heap first of all I am put all element in the heap(priority queue) then all element arrange in the ascending order with the Time complexity of log(n);
    //2. then I am k the opertions 
    //pick the top ele. add to score varible
    //then top ele divide by 3 and push into arr;

    int maxKelements1(vector<int>&arr, int k){
        priority_queue<int>pq(arr.begin(), arr.end());
        long score = 0;
        while(k != 0){
            int ele = pq.top();
            pq.pop();
            score += ele;
            ele = ceil(ele/3.0);
            pq.push(ele);
            k--;
        }
        return score;
    }
};
int main(){
    Solution* sol = new Solution();
    vector<int>arr = {1,10,3,3,3};
    int k = 3;
    cout<<sol->maxKelements1(arr, k);
   return 0;
} 

