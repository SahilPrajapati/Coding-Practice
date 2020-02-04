class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        
        int maxProfit = 0;
        int minBuyPrice = INT_MAX;
        
        for(int i = 0; i < prices.size(); i++)
        {
            if(prices[i] < minBuyPrice)
                minBuyPrice = prices[i];
            
            else if(maxProfit < (prices[i] - minBuyPrice))
                maxProfit = prices[i] - minBuyPrice;
        }
        
        return maxProfit;
        
        //BRUTE FORCE
        /*
        int maxProfit = 0;
        
        for(int i = 0; i < prices.size(); i++)
        {
            for(int j = i+1; j < prices.size(); j++)
            {
                if(prices[i] < prices[j])
                {
                    if(maxProfit < (prices[j] - prices[i]))
                        maxProfit = (prices[j] - prices[i]);
                }
            }
        }
        
        return maxProfit;
        */
        
    }
};
