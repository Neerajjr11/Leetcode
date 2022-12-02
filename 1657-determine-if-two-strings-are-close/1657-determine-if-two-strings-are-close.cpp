class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if(word1.length() != word2.length()) return false;
        
        vector<int> w1_freq(26,0);
        
        vector<int> w2_freq(26,0);
        
        for(int i = 0; i < word1.length(); i++)
            w1_freq[word1[i] - 'a']++;
        
        for(int i = 0; i < word2.length(); i++){
            if(w1_freq[word2[i] - 'a'] == 0)
                return false;
            w2_freq[word2[i] - 'a']++;
        }
        
        sort(w1_freq.begin(), w1_freq.end());
        sort(w2_freq.begin(), w2_freq.end());
        
        return(w1_freq == w2_freq);

    }
};