#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int lengthOfLIS(vector<int> &nums)
    {
        int n = nums.size();
        int maxi = 1;
        vector<int> ans(n, 1);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < i; j++)
            {
                if (nums[j] < nums[i])
                {
                    ans[i] = max(ans[i], ans[j] + 1);
                    maxi = max(maxi, ans[i]);
                }
            }
        }
        return maxi;
    }
};
int main()
{
    vector<int>ans = {10, 9, 2, 5, 3, 7, 101, 18};
    Solution* sol = new Solution();
    cout<<sol->lengthOfLIS(ans);
    return 0;
}