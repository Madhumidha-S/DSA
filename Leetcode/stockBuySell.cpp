class Solution
{
public:
    long long maximumProfit(vector<int> &prices, int k)
    {
        int n = prices.size();
        if (n == 0)
            return 0;

        vector<vector<vector<long long>>> dp(k + 1, vector<vector<long long>>(n, vector<long long>(3, LLONG_MIN)));

        for (int i = 0; i <= k; i++)
        {
            dp[i][0][0] = 0;
            dp[i][0][1] = -prices[0];
            dp[i][0][2] = prices[0];
        }

        for (int i = 0; i <= k; i++)
        {
            for (int j = 1; j < n; j++)
            {
                dp[i][j][0] = dp[i][j - 1][0];
                if (i > 0)
                {
                    if (dp[i - 1][j - 1][1] != LLONG_MIN)
                        dp[i][j][0] = max(dp[i][j][0], dp[i - 1][j - 1][1] + prices[j]);
                    if (dp[i - 1][j - 1][2] != LLONG_MIN)
                        dp[i][j][0] = max(dp[i][j][0], dp[i - 1][j - 1][2] - prices[j]);
                }
                dp[i][j][1] = dp[i][j - 1][1];
                if (dp[i][j - 1][0] != LLONG_MIN)
                    dp[i][j][1] = max(dp[i][j][1], dp[i][j - 1][0] - prices[j]);
                dp[i][j][2] = dp[i][j - 1][2];
                if (dp[i][j - 1][0] != LLONG_MIN)
                    dp[i][j][2] = max(dp[i][j][2], dp[i][j - 1][0] + prices[j]);
            }
        }

        long long ans = 0;
        for (int i = 0; i <= k; i++)
        {
            ans = max(ans, dp[i][n - 1][0]);
        }
        return ans;
    }
};
