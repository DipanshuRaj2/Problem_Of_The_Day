#include <bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    vector<int> nextGreater(vector<int> &arr, int n)
    {
        vector<int> ans;
        for (int i = 0; i < n - 1; i++)
        {
            bool flag = false;
            for (int j = i + 1; j < n; j++)
            {
                if (arr[i] < arr[j])
                {
                    flag = true;
                    ans.push_back(arr[j]);
                    break;
                }
                else
                {
                    continue;
                }
            }
            if (flag == false)
                ans.push_back(-1);
        }
        ans.push_back(-1);
        return ans;
    }
};
int main()
{
    int n = 4;
    vector<int> arr = {4,1,2,4,3} ;
    Solution* sol = new Solution();
    arr = sol->nextGreater(arr, n);
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
