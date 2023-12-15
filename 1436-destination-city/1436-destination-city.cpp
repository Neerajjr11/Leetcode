class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_set<string>s;
        for(auto& x : paths)
            s.insert(x[0]);
        for(auto& x : paths)
            if(!s.count(x[1]))
                return x[1];
        return "";
    }
};