//Leetcode problem : best time to buy and sell stock
//https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxi=0;
        int n=prices.size();
        int buy=prices[0];
        for(int i=1;i<n;i++){
            int sell=prices[i];
            int pro=sell-buy;
            maxi=max(maxi,pro);
            if(buy>prices[i])buy=prices[i];
        }
        return maxi;
    }
};
