class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> s1;
        vector<int> res;
        for(auto i : nums1)
            s1.insert(i);
        for(auto i : nums2){
            if(s1.count(i) != 0){
                res.push_back(i);
                s1.erase(i);
            }
        }
        return res;
    }
};