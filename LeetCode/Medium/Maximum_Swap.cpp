#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    
    int maximumSwap(int num) {
        string str = to_string(num);
        int maxi = INT_MIN; int idx = -1;
        int n = str.size();

        for(int i = 0; i<n; i++){
            if((str[i] - '0') >=  maxi){
                maxi = str[i] -'0';
                idx = i;
            }
        }
        swap(str[0], str[idx]);
        int ans = stoi(str);
        return ans;
    }
    // not pass all the test case; it will 99 test case of 112;


    //98368 o/p = 98863 edge case;

    //correct approach
    //so we use here 2 for loop and check i to j+1 whenever i got the largest value then swap the value;
    int maximumSwap1(int num){
        string str = to_string(num);
        for(int i = 0; i<str.size(); i++){
            int maxi = str[i]; int idx = i;
            for(int j = i+1; j<str.size(); j++){
                if(str[j] >= maxi){
                    maxi = str[j];
                    idx = j;
                }
            }
            if(maxi > str[i]){
                swap(str[i], str[idx]);
                break;
            }
       }   
       int ans = stoi(str);
       return ans; 
    }
};
int main(){
    Solution* sol = new Solution();
    cout<<sol->maximumSwap1(98368);

   return 0;
}