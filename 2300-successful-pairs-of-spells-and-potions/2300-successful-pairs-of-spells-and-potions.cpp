class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        using ll = long long;
        vector<int> res;
        int i = 0;
        int n = potions.size();
        sort(begin(potions), end(potions));
        while(i < spells.size()){
            int low = 0;
            int high = potions.size();
            
            while(low < high) {
                int mid = (low + high)/2;
                
                ll val = (ll)potions[mid] * spells[i];
                
                if(val >= success) high = mid;
                else low = mid + 1;
            }
            res.push_back(n-low);
            i++;
        }
        return res;
    }
};