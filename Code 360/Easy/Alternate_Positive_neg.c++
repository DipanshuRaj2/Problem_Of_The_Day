#include <bits/stdc++.h>
using namespace std;
void posAndNeg(vector<int> &arr)
{
   vector<int>pos;
   vector<int>neg; 
   for(int i = 0; i<arr.size(); i++){
       if(arr[i] >= 0){
           pos.push_back(arr[i]);
       }
       else{
           neg.push_back(arr[i]);
       }
   }
   arr= {};
   for(int i = 0; i<pos.size(); i++){
       arr.push_back(pos[i]);
       arr.push_back(neg[i]);
   }
  for(int i = 0;i<arr.size(); i++){
    cout<<arr[i]<<" ";
      }
}
int main()
{
    vector<int>arr = { -1, 3, 5, 0, -2, -5 };
    posAndNeg(arr);

    return 0;
}