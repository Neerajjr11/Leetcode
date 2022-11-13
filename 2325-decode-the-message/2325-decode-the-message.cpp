class Solution {
public:
    string decodeMessage(string key, string message) {
        key.erase(remove(key.begin(), key.end(), ' '), key.end());
        string res = "";
        map<char,char>mp;
        char temp = 'a';
        for(int i = 0;i<key.length();i++){
            if(mp.find(key[i]) == mp.end()){
                mp[key[i]] = temp;
                temp++;
            }
        }
        for(int i = 0; i < message.length(); i++)
        {
            if(message[i] == ' ')
                res += " ";
            else
            {
                res += mp[message[i]];
            }
        }
        return res;
    }
};