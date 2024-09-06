#include <bits/stdc++.h>
using namespace std;
int missingNumber(vector<int> &arr, int n)
{
    
    int Fdiff = arr[1] - arr[0];
    int last = arr[n - 1] - arr[n-2];
    int cd = 0;
    if (Fdiff == last)
    {
        cd = Fdiff;
    }
    else
    {
        if (arr[2] - arr[1] == Fdiff)
        {
            cd = last;
        }
            else if (arr[2] - arr[1] == last)
            {
                cd = Fdiff;
            }
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i+1] == arr[i]+ cd)
        {
            continue;
        }
        else
        {
            return arr[i] + cd;
        }
    }
}
int main()
{
    vector<int> arr = {1, 4, 10};
    cout<<missingNumber(arr, arr.size());
}