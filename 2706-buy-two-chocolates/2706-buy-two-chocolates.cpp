class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        sort(prices.begin(), prices.end());
        int max_diff = INT_MIN, i = 0, j = 1;
        while(j < prices.size()){
            if((prices[i] + prices[j]) <= money)
                max_diff = max(max_diff, money - (prices[i] + prices[j]));
            i++;
            j++;
        }
        if(max_diff == INT_MIN)
            return money;
        return max_diff;
    }
};