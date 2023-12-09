class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res = "";
        sort(strs.begin(), strs.end());
        string str1 = strs[0], str2 = strs[strs.size() - 1];
        int n = min(str1.size(), str2.size());
        for(int i = 0; i < n; i++){
            if(str1[i] != str2[i])
                return res;
            else
                res += str1[i];
        }
        return res;
    }
};