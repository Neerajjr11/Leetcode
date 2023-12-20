class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
//         Find the smallest two element and add them.
//        If the sum is less then money then return (money - sum)
//        else return money
        // using sorting O(N * logN)
        // sort(prices.begin(), prices.end());
        // if(prices[0] + prices[1] > money)
        //     return money;
        // return (money - (prices[0] + prices[1]));
        
        // finding the smallest and second smallest in O(N)
        int smallest = INT_MAX, secondSmallest = INT_MAX;
        for(auto& x : prices){
            if(smallest > x){
                secondSmallest = smallest;
                smallest = x;
            }
            else if(secondSmallest >= x)
                secondSmallest = x;
        }
        if(smallest + secondSmallest > money)
            return money;
        return (money - (secondSmallest + smallest));
    }
};