class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<pair<int, string>>sortheight;
        for(int i = 0; i < names.size(); i++)
            sortheight.push_back({heights[i], names[i]});
        sort(sortheight.begin(), sortheight.end(),[](auto&a, auto& b){
            return a.first > b.first;
        });
        vector<string> res;
        for(int i = 0; i < sortheight.size(); i++)
            res.push_back(sortheight[i].second);
        return res;
    }
};