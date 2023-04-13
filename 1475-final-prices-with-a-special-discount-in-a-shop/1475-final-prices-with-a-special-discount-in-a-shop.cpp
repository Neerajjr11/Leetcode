class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int> res;
        int flag;
        for(int i = 0; i < prices.size(); i++){
            flag = 0;
            for(int j = i + 1; j < prices.size(); j++){
                if(prices[j] <= prices[i]){
                    res.push_back(prices[i] - prices[j]);
                    flag = 1;
                    break;
                }
            }
            if(flag == 0)
                res.push_back(prices[i]);
        }
        return res;
    }
};