class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(), piles.end());
        int result = 0;
        int n = piles.size();
        
        for(int i=0; i<n/3; i++) {
            piles.pop_back();
            result += piles.back();
            piles.pop_back();
        }
        
        return result;
    }
};