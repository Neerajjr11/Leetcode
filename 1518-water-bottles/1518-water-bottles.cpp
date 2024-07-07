class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int drinkable = numBottles/numExchange;
        int rem = numBottles % numExchange, totalBottles = drinkable + rem;

        int res = numBottles;
        while(totalBottles >= numExchange){
            res += drinkable;
            totalBottles = (drinkable + rem) / numExchange;
            rem = (drinkable + rem) % numExchange;
            drinkable = totalBottles;
            totalBottles += rem;
        }
        return res + drinkable;
    }
};