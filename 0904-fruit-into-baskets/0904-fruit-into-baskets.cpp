class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int maxi = INT_MIN;
        unordered_map<int, int> mp;
        int i= 0, j = 0, n = fruits.size();
        while(j < n){
            mp[fruits[j]]++;
            if(mp.size() <= 2)
                maxi = max(maxi, (j - i + 1));
            else{
                mp[fruits[i]]--;
                if(mp[fruits[i]] == 0)
                    mp.erase(fruits[i]);
                i++;
            }
            j++;
        }
        return maxi;
    }
};