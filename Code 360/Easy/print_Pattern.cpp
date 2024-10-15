
// For N=5, Pattern:
// E
// DE
// CDE
// BCDE
// ABCDE 
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     for(int i = 5; i>0; i--){
//         int count = 0;
//         for(int j = 5; j >=i; j--){
//             cout<<i+count<<" ";
//             count++;

//         }
//         cout<<endl;
//     }
//    return 0;
// }



// For N=5, Pattern:
// E
// DE
// CDE
// BCDE
// ABCDE 
#include <bits/stdc++.h> 
using namespace std;
vector<vector<char>> interestingPattern(int n)
{
    // Write your code here
    vector<vector<char>>ans;
    for(int i = n;i >0; i--){
        vector<char>vt;
        int count = -1;
        for(int j = n; j>=i; j--){
            char ch = 'A'+ i+ count;
            count++;
            vt.push_back(ch); 
            
        }
        ans.push_back(vt);
    }
    return ans;
}
int main(){
    vector<vector<char>>arr = interestingPattern(26);
    for(int i = 0; i<=arr.size(); i++){
        for(int j = 0; j<arr[i].size(); j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
