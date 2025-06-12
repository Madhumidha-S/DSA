/*Stock Buy and Sell – Max one Transaction Allowed*/
//Time O(n) and Space O(1)

class Solution {
  public:
    int maximumProfit(vector<int> &prices) {
        int n = prices.size();
        int tot=0;
        int sm=INT_MAX,smi;
        int lg=0;
        
        for(int i=0;i<n;i++)
        {
            if(prices[i]<sm)
            {
                sm=prices[i];
                smi=i;
            }
        }
        for(int i = smi+1;i<n;i++)
        {
            if(prices[i]>lg)
            {
                lg=prices[i];
            }
        }
        tot=lg-sm;
        if(smi==n-1)
            return 0;
        else
            return tot;
    }
};

/*
This logic will work only for 19 test cases

class Solution {
  public:
    int maximumProfit(vector<int> &prices) {
        int n = prices.size();
        int tot=0;
        int sm=INT_MAX,smi;
        int lg=0;
        
        for(int i=0;i<n;i++)
        {
            if(prices[i]<sm)
            {
                sm=prices[i];
                smi=i;
            }
        }
        for(int i = smi+1;i<n;i++)
        {
            if(prices[i]>lg)
            {
                lg=prices[i];
            }
        }
        tot=lg-sm;
        if(smi==n-1)
            return 0;
        else
            return tot;
    }
};
*/