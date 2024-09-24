#include<iostream>
#include<vector>
using namespace std;
void selectionSort(vector<int>&arr){
    int n = arr.size();
    for(int i = 0; i<n-1; i++){
        int minIdx = i;
        for(int j = i+1; j<n; j++){
            if(arr[j] <= arr[minIdx]){
                minIdx = j;
            }
        }
        if(minIdx != i){
            swap(arr[i], arr[minIdx]);
        }
    }
}
int main(){
    vector<int>arr = {5, 4, 2, 12, 1, 4};
    selectionSort(arr);
    for(int i = 0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }

}