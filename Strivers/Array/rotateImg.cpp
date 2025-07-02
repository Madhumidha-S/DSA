//Rotate Array
// Logic - Transpose the array by swap and Reverse the rows
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(i<j)
                {
                    int temp = matrix[i][j];
                    matrix[i][j] = matrix[j][i];
                    matrix[j][i] = temp;
                }
            }
        }
        for(int k = 0; k < n; k++)
        {
            reverse(matrix[k].begin(), matrix[k].end());
        }
    }
};