/*Stock Buy and Sell – Multiple Transaction Allowed*/
//Time O(n) and Space O(1)

class Solution {
  public:
    int maximumProfit(vector<int> &prices) {
        int n = prices.size();
        int tot=0,temp;
        
        for(int i=1;i<n;i++)
        {
            temp= prices[i]-prices[i-1];
            if(temp>0)
            {
                tot+=temp;
            }
        }
        return tot;
    }
};

/*
This below logic only works for 19 test cases in GFG

int main()
{
    int prices[5] = {4,2,2,2,4};
	int n = 5;
	int buy=0,sell=0;

	for(int i=0; i<n-1; i++)
	{
		if(prices[i]<prices[i+1] && buy==0)
		{
			buy = prices[i];
		}
		if(prices[i]>prices[i+1] && buy!=0)
		{
			sell+=(prices[i]-buy);
			buy=0;
		}
		if(i>0 && prices[i]>prices[i+1] && prices[i-1]==0 && buy!=0)
		{
		    sell+=(prices[i]-buy);
			buy=0;
		}
	}
	
	if (buy != 0 && prices[n - 1] > buy) {
        sell += (prices[n - 1] - buy);
    }
	return sell;
}
*/