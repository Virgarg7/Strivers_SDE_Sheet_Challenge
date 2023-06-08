#include <bits/stdc++.h>

void setZeros(vector<vector<int>>& matrix)
{
    int n = matrix.size();
    int m = matrix[0].size();

    int row[n] = {0};
    int col[m] = {0};

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            // It means we will mark the current row and column
            if (matrix[i][j] == 0)
            {
                row[i] = 1;
                col[j] = 1;
            }
        }
    }

    // Then we will Reiterate again
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            // Then we will set to 0
            if (row[i] == 1 || col[j] == 1)
            {
                matrix[i][j] = 0;
            }
        }
    }
}
