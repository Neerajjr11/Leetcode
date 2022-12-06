class Solution {
public:
    string shortestCompletingWord(string licensePlate, vector<string>& words) {
        vector<int> freql(26,0);
        for(int i = 0; i < licensePlate.length(); i++){
            if(isalpha(licensePlate[i])){
                freql[tolower(licensePlate[i]) - 'a']++;
            }
        }
        int minlen = INT_MAX;
        string res;
        int flag = 1;
        for(auto word : words){
            vector<int> freqw(26,0);
            if(word.length() < minlen){
                for(int i = 0; i < word.length(); i++){
                    freqw[tolower(word[i]) - 'a']++;
                }
                for(int i = 0; i<26; i++){
                    if(freqw[i] < freql[i])
                        flag = 0;
                }
                if(flag != 0){
                    minlen = word.length();
                    res = word;
                }
                flag = 1;
            }
        }
        return res;
    }
};