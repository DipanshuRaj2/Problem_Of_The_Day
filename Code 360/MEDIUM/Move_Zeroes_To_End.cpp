#include <bits/stdc++.h>
using namespace std;
void pushZerosAtEnd(vector<int> &arr)
{
    // Write your code here.
    int zeroes = 0;
    for(int i = 0; i<arr.size(); i++){
        if(arr[i] == 0)zeroes++;
    }
    arr.erase(remove(arr.begin(), arr.end(), 0), arr.end());

    for(int i = 0; i<zeroes; i++){
        arr.push_back(0);
    }
    for(int i = 0; i<arr.size(); i++)
        cout<<arr[i]<<" ";
}
int main()
{
    vector<int> Arr = {0, 1, -2, 3, 4, 0, 5, -27, 9, 0};
    pushZerosAtEnd(Arr);
    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string str = "My name is Dipanshu Raj";
//     // transform(str.begin(), str.end(), str.begin(), :: toupper);
//     int i = 0;
//     while(i < str.size()){
//         if(str[i] == tolower(str[i])){
//           str[i] = toupper(str[i]);
//         }
//         i++;
//     }
//     cout<<str;
//  return 0;
//  }