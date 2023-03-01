class Solution {
public:
    string reversePrefix(string word, char ch) {
        bool isPresent = false;
        int idx = 0;
        for(int i = 0; i < word.size(); i++){
            if(word[i] == ch){
                idx = i;
                isPresent = true;
                break;
            }
        }
        if(isPresent == false)
            return word;
        reverse(word.begin(), word.begin() + idx + 1);
        return word;
    }
};