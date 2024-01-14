class Solution {
public:
    bool closeStrings(string word1, string word2) {
        vector<int> v1(26,0);
        vector<int> v2(26, 0);
        for(int i = 0; i < word1.size(); i++)
            v1[word1[i] - 'a']++;
        for(int i = 0; i < word2.size(); i++){
            if(v1[word2[i] - 'a'] == 0)
                return false;
            v2[word2[i] - 'a']++;
        }
        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end());
        return v1 == v2;
        
    }
};