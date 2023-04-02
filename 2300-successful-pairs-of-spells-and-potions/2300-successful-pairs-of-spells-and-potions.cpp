class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        vector<int> res;
        int i = 0;
        int n = potions.size();
        sort(begin(potions), end(potions));
        while(i < spells.size()){
            int low = 0;
            int high = potions.size() - 1;
            int found = INT_MAX;
            while(low <= high){
                int mid = low + (high - low) / 2;
                if((long long) potions[mid]*spells[i] >= success){
                    found = mid;
                    high = mid - 1;
                }
                else
                    low = mid + 1;
            }
            // cout<<found<<" ";
            if(found != INT_MAX)
                res.push_back(n - 1 - high);
            else
                res.push_back(0);
            i++;
        }
        return res;
    }
};