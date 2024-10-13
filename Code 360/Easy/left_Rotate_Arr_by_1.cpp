#include<bits/stdc++.h>
using namespace std;
vector<int> rotateArray(vector<int>& arr, int n) {
    // Write your code here.
    int a = arr[0];
    arr.erase(arr.begin());
    arr.push_back(a);
    return arr;
}

int main(){
    vector<int>arr = {2, 3, 4, 5, 1};
    arr = rotateArray(arr, arr.size());
    for(int i = 0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
 return 0;
 }