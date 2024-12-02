class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        int count = 0, wordSize = searchWord.size();
        string helper = "";
        for(int i = 0; i < sentence.size(); i++){
            helper += sentence[i];
            if(helper.size() == searchWord.size()){
                if(helper == searchWord)
                    return count + 1;
            }
            if(sentence[i] == ' '){
                count++;
                helper = "";
            }
                
        }
        // if(helper.find(searchWord) != string::npos)
        //     return count + 1;
        return -1;
    }
};