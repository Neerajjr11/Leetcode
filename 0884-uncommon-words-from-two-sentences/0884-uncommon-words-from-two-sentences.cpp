class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string, int> mp;
        string helper1 = "", helper2 = "";
        for(int i = 0; i < s1.size(); i++){
            if(s1[i] != ' '){
                helper1+= s1[i];
            }
            if(s1[i] == ' '){
                mp[helper1]++;
                helper1= "";
            }
        }
        for(int i = 0; i < s2.size(); i++){
            if(s2[i] != ' '){
                helper2+=s2[i];
            }
            if(s2[i] == ' '){
                mp[helper2]++;
                helper2 = "";
            }
        }
        mp[helper1]++;
        mp[helper2]++;
        vector<string> res;
        for(auto& i : mp)
            if(i.second == 1)
                res.push_back(i.first);
        
        return res;
    }
};