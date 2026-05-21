class Solution {
public:
    int maxProfit(vector<int>& prices) {
        long long max_profit=0, minPrice=LONG_MAX;
        for(int i=0;i<prices.size();i++){
            if(prices[i]<minPrice){
                minPrice=prices[i];
            }
            else{
                max_profit=max(max_profit,prices[i]-minPrice);
            }

        }
        return max_profit;
        
    }
};