#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int findComplement(int num)
    {
        string bin = "";
        while (num != 0)
        {
            int ele = num % 2;
            bin += to_string(ele);
            num /= 2;
        }
        reverse(bin.begin(), bin.end());
        for (int i = 0; i < bin.size(); i++)
        {
            if (bin[i] == '0')
                bin[i] = '1';
            else
                bin[i] = '0';
        }
        reverse(bin.begin(), bin.end());
        int a = 0;
        int ans = 0;
        for (int i = 0; i < bin.size(); i++)
        {
            int power = pow(2, a);
            if (bin[i] == '1')
            {
                ans += power;
            }
            a++;
        }
        return ans;
    }
};
int main()
{
    Solution sol;
    cout<<sol.findComplement(8);
    return 0;
}