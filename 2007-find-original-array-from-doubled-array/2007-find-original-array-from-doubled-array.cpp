class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        if(changed.size() % 2 != 0) return {};
        unordered_map<int,int> mp;
        for(auto it: changed){
            mp[it]++;   
        }
       sort(changed.begin(), changed.end());
        vector<int> ans;
        for(auto it: changed){
            if(mp[it] > 0){
                    mp[it]--;
                    ans.push_back(it);
                    if(mp[it * 2] > 0){
                        mp[it * 2]--;
                    }
                    else{
                        return {};
                    }
            }       
        }
        return ans;
        
    }
};