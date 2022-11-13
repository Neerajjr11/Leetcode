class Solution {
public:
    string reverseWords(string s) {
        string word = "";
        vector<string> store;
        string res = "";
        for(int i =0;i<s.length();i++){
            string word=""; 
            if(s[i]==' ')continue;
            while(s[i]!=' ' and i<s.length()){
                word+=s[i];
                i++;
            }
            store.push_back(word);
        }
        for(int i = store.size() - 1;i >= 1;i--){
            res+=store[i];
            res+=" ";
        }
        res+=store[0];
        return res;
    }
};