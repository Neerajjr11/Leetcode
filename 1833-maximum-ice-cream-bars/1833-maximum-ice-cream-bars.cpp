class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(), costs.end());
        int total = 0;
        for(int i = 0; i < costs.size(); i++){
            if(costs[i] <= coins){
                total++;
                coins -= costs[i];
            }
            else
                break;
        }
        return total;
    }
};