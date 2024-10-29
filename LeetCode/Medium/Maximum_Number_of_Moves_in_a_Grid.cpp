#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
// if not understand check the video code story with mik easy to understand
    // According to question
    // valid number of moves
    //  row - 1,  col + 1
    //  row,   col+1
    //  row +1, col+1
    vector<int> direction = {-1, 0, 1};
    int dfs(int row, int col, vector<vector<int>>& moves)
    {
        int m = moves.size();//row
        int n = moves[0].size();//column
        int maxi = 0;
        for (int &dir : direction)
        {
            int newRow = row + dir;
            int newCol = col + 1;
            if (newRow >= 0 && newRow < m && newCol >= 0 && newCol < n && moves[newRow][newCol] > moves[row][col])
            {
                maxi = max(maxi, 1+dfs(newRow, newCol, moves));
            }
        }
        return maxi;
    }
    int maxMoves(vector<vector<int>> moves)
    {
        int m = moves.size();    //  no. of rows
        int n = moves[0].size(); // no. of col
        int result = 0;
        for (int row = 0; row < m; row++)
        {
            result = max(result, dfs(row, 0, moves));
        }
        return result;
    }
};
int main()
{

    Solution* sol = new Solution(); 
    vector<vector<int>> ans = {{2, 4, 3, 5}, {5, 4, 9, 3}, {3, 4, 2, 11}, {10, 9, 13, 15}};
    cout<< sol->maxMoves(ans);
 
    return 0;
}