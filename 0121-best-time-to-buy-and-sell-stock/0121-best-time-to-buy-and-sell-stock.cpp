class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit;
        int max_profit=0;
        int r=INT_MAX;
        for(int i=0;i<prices.size();i++){
            
            if(prices[i]<r){
                r=prices[i];
            }
            profit=prices[i]-r;
            if(profit>max_profit){
                max_profit=profit;

            }
            

            
        }
        return max_profit;
        
        

        
        
    }
};