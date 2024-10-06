#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    // Note that the size of the array is n-1
    int missingNumber(int n, vector<int> &arr)
    {
        int totSum = (n * (n + 1)) / 2;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += arr[i];
        }
        return totSum - sum;
    }
};
int main()
{
    Solution sol;
    vector<int> arr = {20, 18, 9, 8, 5, 15, 14, 1, 2, 10,
                       7, 3, 4, 17, 11, 19, 12, 6, 13};
            cout<<sol.missingNumber(20, arr);
}