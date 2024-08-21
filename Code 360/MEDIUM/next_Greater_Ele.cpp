#include <bits/stdc++.h>
using namespace std;
vector<int>nextGreater(vector<int>&arr){
    vector<int>ans;
    for(int i = 0; i<arr.size(); i++){
    bool flag = false;
        for(int j = i+1; j<arr.size(); j++){
            if(arr[i] < arr[j]){
                flag = true;
                ans.push_back(arr[j]);
                break;
            }
        }
        if(flag == false){
            ans.push_back(-1);
        }
    }
    return ans;
}
int main()
{
    vector<int>arr = {4, 3, 5};
    arr = nextGreater(arr);
    for(auto ele : arr){
        cout<<ele<<" ";
    }
    return 0;
}