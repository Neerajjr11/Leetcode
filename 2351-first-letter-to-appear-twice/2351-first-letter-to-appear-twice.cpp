class Solution {
public:
    char repeatedCharacter(string s) {
        vector<int> count(26, 0);
        for(int i = 0; i < s.size(); i++){
            count[s[i] - 'a']++;
            if(count[s[i] - 'a'] > 1)
                return s[i];
        }
        return '-1';
    }
};