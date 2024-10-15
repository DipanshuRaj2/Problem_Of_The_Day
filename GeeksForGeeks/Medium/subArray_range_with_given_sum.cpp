#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    // brute force 
    // generate all subarray and check the sum equal to target;
    int subArraySum(vector<int>& arr, int tar) {
        // Your code here
        int n = arr.size();int count = 0;
        for(int i = 0; i<n; i++){
            int sum = 0;
            for(int j = i; j<n; j++){
                sum += arr[j];
                if(sum == tar){
                    count++;
                }
            }
        }
        return count;
    }
    //optimal approach 
    //using hash map we are insert the sum in the map and check the (sum - target) ele in the map.
    //after the match of ele in the map we add count of map[values] in the check the code;

    int subArraySum1(vector<int>&arr, int tar){
        int n = arr.size(); int sum = 0;
        int count = 0; 
        unordered_map<int, int>ump;
        for(int i = 0; i<n; i++){
            sum += arr[i];
            if(sum == tar)count++;
            if(ump.find(sum - tar) != ump.end()){
                count += ump[sum - tar];
            }
            ump[sum]++;
        }
        return count;
    }
};
int main(){
    vector<int>arr = {10, 2, -2, -20, 10};
    int tar = -10;
    Solution* sol = new Solution();
    cout<<sol->subArraySum1(arr, tar);
   return 0;
}