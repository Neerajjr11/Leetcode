class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string res = "";
        int i = 0, j = 0;
        while(i < word1.size() and j < word2.size()){
            res += word1[i++];
            res += word2[j++];
        }
        while(i < word1.size())
            res += word1[i++];
        while(j < word2.size())
            res += word2[j++];
        return res;
    }
};