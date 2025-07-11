class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;

        for(int i = 0; i < numRows; i++)
        {
            vector<int> temp(i+1, 1);
            for(int j = 1; j < i; j++)
            {
                int t = res[i-1][j-1] + res[i-1][j];
                temp[j] = t;
            }
            res.push_back(temp);
        }
        return res;
    }
};