class Solution {
public:
    int canEatInTime(vector<int>& piles, int mid, int h){
        int hours = 0;
        for(auto pile : piles){
            int div = pile / mid;
            hours += div;
            if(pile % mid != 0)
                hours++;
            if(hours > h)
                return false;
        }
        return true;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1, high = *max_element(piles.begin(), piles.end());
        // we take high as the max element in the piles
        
        while(low <= high){
            int mid = low + (high - low) / 2;
            if(canEatInTime(piles, mid, h))
                high = mid - 1;
            else
                low = mid + 1;
        }
        return low;
    }
};