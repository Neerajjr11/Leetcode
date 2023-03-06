class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int i = 0, j = 0, n = fruits.size();
        unordered_map<int,int> mp;
        int res = INT_MIN;
        while(j < n){
            mp[fruits[j]]++;
            if(mp.size() <= 2){
                res = max(res, (j - i + 1));
                j++;
            }
            else{
                while(mp.size() > 2){
                    mp[fruits[i]]--;
                    if(mp[fruits[i]] == 0)
                        mp.erase(fruits[i]);
                    i++;
                }
                j++;
            }
        }
        return res;
    }
};