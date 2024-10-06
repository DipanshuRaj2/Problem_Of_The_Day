#include <bits/stdc++.h>
using namespace std;
vector<int> giftsLeft(int n, int k, int q, vector<int>& demands)
{
    vector<int> ans;
    int N = n;
    for (int i = 0; i < q; i++)
    {
        int childGift = N - demands[i];
        if (childGift >= k)
        {
            ans.push_back(childGift);
            N = childGift;
        }
        else if (childGift < k && childGift >= 0)
        {
            ans.push_back(n);
            N = n;
        }
        else if (childGift < 0)
        {
            ans.push_back(-1);
        }
    }
    return ans;
}
int main()
{
    int n = 10;
    int k = 4;
    vector<int>demands = {4, 2, 2};
    int q = demands.size();
    demands = giftsLeft(n, k, q, demands);
    for(int i = 0; i<q; i++)
    {
        cout<<demands[i]<<"  ";
    }
    return 0;
}