#include <bits/stdc++.h>
using namespace std;
vector<int> reverseArr(vector<int> &arr, int k)
{
    int n = arr.size();
    k = k % n;
    reverse(arr.begin(), arr.end());
    reverse(arr.begin(), arr.begin() + k);
    reverse(arr.begin() + k, arr.end());

    return arr;
}
vector<vector<int>> solve(vector<vector<int>> &arr, int k)
{
    // Write your code here.
    int n = arr.size();
    vector<vector<int>> ans;
    for (int i = 0; i < n; i++)
    {
        vector<int> res;
        for (int j = 0; j < n; j++)
        {
            res.push_back(arr[i][j]);
        }
        res = reverseArr(res, k);
        ans.push_back(res);
    }
    return ans;
}
int main()
{
    vector<vector<int>> arr = { {2, 2, 4},{1, 3, 4},{1, 2, 3}};
    int k = 2;
    arr = solve(arr, k);
    for(int i = 0; i<arr.size(); i++){
        for(int j = 0; j<arr.size(); j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}