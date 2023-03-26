class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        vector<vector<int>> res;
        unordered_map<int, vector<int>>mp;
        for(int i = 0; i < groupSizes.size(); i++){
            mp[groupSizes[i]].push_back(i);
        }
        int count = 0;
        for(auto& i : mp){
            vector<int> pusher;
            int count = 0;
            for(int j = 0; j < i.second.size(); j++){
                pusher.push_back(i.second[j]);
                if(count == i.first - 1){
                    res.push_back(pusher);
                    pusher.clear();
                    count = 0;
                }else{
                    count++;
                }
            }
        }
        return res;
    }
};