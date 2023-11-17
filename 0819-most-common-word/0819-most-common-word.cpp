class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        string word = "";
        map<string, int> mp;
        for(auto& s : paragraph){
            if(s == ' ' or !isalpha(s) and word != "" ){
                mp[word]++;
                word = "";
            }
            else if(isalpha(s))
                word += tolower(s);
        }
        if(word != "")
            mp[word]++;
        for(auto& s : banned){
            if(mp.find(s) != mp.end())
                mp.erase(s);
        }
        int maxi = 0;
        string res = "";
        for(auto& i : mp){
            if(maxi < i.second and isalpha(i.first[0])){
                    res = i.first;
                    maxi = i.second;
            }
        }
        return res;
    }
};