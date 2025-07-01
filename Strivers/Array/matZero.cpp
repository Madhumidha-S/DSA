/*
Set Matrix Zeroes
Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.
You must do it in place.
*/

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int columns = matrix[0].size();
        bool firstRowZero = false;
        bool firstColumnZero = false;

        for(int i = 0; i < rows; i++)
        {
            if(matrix[i][0] == 0)
            { firstColumnZero = true; break; }
        }

        for(int j = 0; j < columns; j++)
        {
            if(matrix[0][j] == 0)
            { firstRowZero = true; break; }
        }

        for(int i = 1; i < rows; i++)
        {
            for(int j = 1; j < columns; j++)
            {
                if(matrix[i][j] == 0)
                {
                    matrix[0][j] = 0;
                    matrix[i][0] = 0;
                }
            }
        }

        for(int i = 1; i < rows; i++)
        {
            for(int j = 1; j < columns; j++)
            {
                if(matrix[0][j] == 0 || matrix[i][0] == 0)
                {
                    matrix[i][j] = 0;
                }
            }
        }
        if(firstRowZero)
        {
            for(int i = 0; i < columns; i++)
            {
                matrix[0][i] = 0;
            }
        }
        if(firstColumnZero)
        {
            for(int j = 0; j < rows; j++)
            {
                matrix[j][0] = 0;
            }
        }
    }
};