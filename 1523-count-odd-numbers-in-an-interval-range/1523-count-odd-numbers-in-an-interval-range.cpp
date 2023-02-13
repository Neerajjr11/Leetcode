class Solution {
public:
    int countOdds(int low, int high) {
        int diff = (high - low) /2;
        return diff + (high % 2 or low % 2);
    }
};