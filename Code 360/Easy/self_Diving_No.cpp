#include <bits/stdc++.h>
using namespace std;
vector<int> findAllSelfDividingNumbers(int lower, int upper)
{
    vector<int> ans;
    for (int i = lower; i <= upper; i++)
    {
        bool check = false;
        int N = i;
        while (N != 0)
        {
            int ele = N % 10;
            if (ele == 0){
                check = false;
                break;
            }
            else
            {
                if (i % ele == 0)
                {
                    check = true;
                }
                else
                {
                    check = false;
                    break;
                }
            }
             N /= 10;
        }
        if (check == true)
            ans.push_back(i);
    }
    return ans;
}
int main()
{
    vector<int>arr = findAllSelfDividingNumbers(100, 150);
    for(int i = 0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}