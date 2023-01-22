class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> m1,m2;
        if(s.size() != t.size())
            return false;
        for(int i = 0; i < s.size(); i++){
            m1[s[i]]++;
            m2[t[i]]++;
        }
        return (m1 == m2);
    }
};