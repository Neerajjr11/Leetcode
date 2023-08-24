class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int> res;
        unordered_map<char, int> lastOccurence;
        for(int i = 0; i < s.size(); i++)
            lastOccurence[s[i]] = i;
        int start = 0, end = 0;
        for(int i = 0; i < s.size(); i++){
            end = max(end, lastOccurence[s[i]]);
            if(i == end){
                res.push_back((end - start + 1));
                start = i + 1;
            }
        }
        return res;
    }
};