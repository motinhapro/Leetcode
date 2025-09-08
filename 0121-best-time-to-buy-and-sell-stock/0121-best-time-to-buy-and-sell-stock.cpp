class Solution {
public:
    int maxProfit(vector<int>& prices) {

        if(!prices.size()) return 0;
        
        int menor = prices[0], profit = 0, ans = 0;

        for(int i = 1; i < prices.size(); i++) {

            menor = min(menor, prices[i]);

            ans = max(ans, prices[i] - menor);
        }

        return ans;
    }
};