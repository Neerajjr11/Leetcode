class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        int count = 0;
        for(int i = 0; i < rocks.size(); i++){
            rocks[i] = capacity[i] - rocks[i];
        }
        sort(rocks.begin(), rocks.end());
        for(int i = 0; i < rocks.size(); i++){
            if(additionalRocks >= rocks[i]){
                additionalRocks -= rocks[i];
                count++;
            }
            else
                break;
        }
        return count;
    }
};