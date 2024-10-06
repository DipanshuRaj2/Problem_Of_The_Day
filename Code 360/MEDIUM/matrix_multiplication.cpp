#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> multiplyMatrices(vector<vector<int>> &mat1, vector<vector<int>> &mat2)
{
    vector<vector<int>> ans;
    int n1, m1, n2, m2;
    n1 = mat1.size();
    n2 = mat2.size();

    m1 = mat1[0].size();
    m2 = mat2[0].size();
    for (int i = 0; i < n1; i++)
    {
        vector<int> res;
        for (int j = 0; j < m2; j++)
        {
            int sum = 0;
            for (int k = 0; k < n2; k++)
            {
                sum = sum + (mat1[i][k] * mat2[k][j]);
            }
            res.push_back(sum);
        }
        ans.push_back(res);
    }
    return ans;
}

int main()
{
    vector<vector<int>> m1 = {{1, 2},
                              {3, 4},
                              {5, 6}};

    vector<vector<int>> m2 = { {7, 8, 9},
                               {10, 11, 12}};

    return 0;
}