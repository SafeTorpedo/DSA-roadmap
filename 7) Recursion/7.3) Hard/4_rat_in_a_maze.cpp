#include <bits/stdc++.h>
using namespace std;

void solve(int i, int j, string path, vector<vector<int>> &matrix, int row, int column, vector<string> &ans)
{
    if (i < 0 or i >= row or j < 0 or j >= column)
        return;

    if (matrix[i][j] == 0)
        return;

    if (i == row - 1 and j == column - 1)
        ans.push_back(path);

    matrix[i][j] = 0;

    solve(i - 1, j, path + 'U', matrix, row, column, ans);
    solve(i + 1, j, path + 'D', matrix, row, column, ans);
    solve(i, j - 1, path + 'L', matrix, row, column, ans);
    solve(i, j + 1, path + 'R', matrix, row, column, ans);

    matrix[i][j] = 1;
    return;
}

vector<string> ratMaze(vector<vector<int>> &mat)
{
    string path = "";
    int n = mat.size();
    vector<string> ans;
    solve(0, 0, path, mat, n, n, ans);
    return ans;
}
