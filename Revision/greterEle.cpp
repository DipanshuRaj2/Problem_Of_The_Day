#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int findElement(vector<int> &arr) {

        int n = arr.size();
        for(int i = 1; i<n-1; i++){
            bool check = true;
            for(int j = 0; j < i; j++){
                if(arr[j] > arr[i]){
                    check = false;
                    break;
                }
            }
            for(int j = i+1; j<n; j++){
                if(arr[j]< arr[i]){
                check = false;
                break;
                }
            }
            if(check){
                return arr[i];
            }
        }
        return -1;
    }
};
int main(){
    Solution sol;
    vector<int> arr = {5, 902, 692, 126, 407, 586, 131, 833, 996, 777, 156, 179, 
                            941, 220, 513, 621, 430, 937, 708, 846, 710, 867, 270, 388, 
                            115, 419, 945, 837, 691, 326, 96, 671, 872, 537, 261, 645, 
                            468, 219, 635, 27, 246, 778, 709, 340, 59, 577, 310, 697, 
                            368, 712, 499, 85, 759, 76, 486, 199, 329, 921, 892, 592, 
                            395, 589, 25, 182, 923, 798, 818, 56, 285, 839, 108, 442, 
                            361, 903, 195, 107, 527, 379, 678, 277, 758, 789, 809, 101, 
                            313, 508, 290, 84, 412, 174, 985, 565, 941, 532, 913, 208, 
                            486, 269, 964, 214};  
    cout<<sol.findElement(arr);
}