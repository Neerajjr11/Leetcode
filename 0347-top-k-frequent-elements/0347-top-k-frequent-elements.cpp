class Solution {
public:
    bool static compare(pair<int, int>& n,pair<int, int>& m){
      return n.second > m.second;
    }
    vector<int> topKFrequent(vector<int>& nums, int k) {
//         if(nums.size() == 1 and k >= 1)
//             return {nums[0]};
//         else
//             if(nums.size() == 1 and k == 0)
//             return{-1};
        
        unordered_map<int, int> map;
        for(int i =0; i < nums.size(); i++)
            map[nums[i]]++;
        vector<pair<int, int>> Ans;
        for (auto& i : map) 
            Ans.push_back(i);
        sort(Ans.begin(), Ans.end(), compare);
        vector<int> res;
        int j = 0;
        for(auto i : Ans){
            if(j < k){
                res.push_back(i.first);
                j++;
            }
            else
                return res;
        }
        return res;
    }
};