// #include<iostream>
// #include<vector>
// using namespace std;
// void selectionSort(vector<int>&arr){
//     int n = arr.size();
//     for(int i = 0; i<n-1; i++){
//         int minIdx = i;
//         for(int j = i+1; j<n; j++){
//             if(arr[j] <= arr[minIdx]){
//                 minIdx = j;
//             }
//         }
//         if(minIdx != i){
//             swap(arr[i], arr[minIdx]);
//         }
//     }
// }
// int main(){
//     vector<int>arr = {5, 4, 2, 12, 1, 4};
//     selectionSort(arr);
//     for(int i = 0; i<arr.size(); i++){
//         cout<<arr[i]<<" ";
//     }

// }

// bubble sort

// #include <bits/stdc++.h>
// using namespace std;
// void bubbleSort(vector<int>&arr){
//     int n = arr.size();
//     for(int i = 0; i<n; i++){
//         bool swapped = false;
//         for(int j = 0; j<n- i- 1; j++){
//             if(arr[j] > arr[j+1]){
//                 swap(arr[j], arr[j+1]);
//                 swapped = true;
//             }
//         }
//         if(swapped == false) break;
//     }
// }
// int main()
// {
//     vector<int>arr = {6, 0, 3, 5};
//     bubbleSort(arr);
//     for(int i = 0; i<arr.size(); i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

#include<iostream>
using namespace std;
int main(){
    int a = 2; 
    int b = 3;
    swap(a,b);
 return 0;
 }