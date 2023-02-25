class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max=0;
        int j=0;
        for(int i=0; i<prices.size(); i++){
            int compare = prices[i]-prices[j];
            if(compare>max) max=compare;
            else if(prices[i]<prices[j]) j=i;
        }
        return max;
    }
};
