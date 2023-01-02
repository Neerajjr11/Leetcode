class Solution {
public:
    bool detectCapitalUse(string word) {
        int count = 0;
        for(int i = 0; i < word.size(); i++){
            if((word[i] - 'a') < 0)
                count++;
        }
        int neg = word[0] - 'a';
        if((count == 1) && neg < 0)
            return true;
        if (count == word.size())
            return true;
        if(count == 0)
            return true;
        return false;
    }
};