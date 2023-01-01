class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> words;
        string res = "";
        for(int i = 0; i < s.size(); i++){
            if(s[i] == ' ' || i == s.size() - 1){
                if(i == s.size() - 1)
                    res += s[i];
                words.push_back(res);
                res = "";
            }
            else
                res += s[i];
        }
        // If vector and pattern are of different sizes there can be no mapping
        if(words.size() != pattern.size())
            return false;
        // map each word to a current char in pattern
        // tht way if a char is repeated in pattern check if it is the same word as we have mapped before if not return false
        //also check if we adding a new char to map check if the word which is getting adding with it is already present
        // if tht word is already present print false;
        unordered_map<char, string> map;
        // To check if the same word is not mappped with another character
        set<string> S;
        for(int i = 0; i < pattern.size(); i++){
            // Take current character in pattern
            char current_char = pattern[i];
            // If current character is present in the map
            if(map.find(current_char) != map.end()){
            //Check if the string mapped to that character is different or not if yes
			//return false
                if(map[current_char] != words[i])
                    return false;
            }
            // If not present in the map
            else{
                // Check if the string is previously in set
                // If it is in set it means it is already mapped return false
                if(S.count(words[i]) > 0)
                    return false;
                map[current_char] = words[i];
                S.insert(words[i]);
            }
        }
        return true;
    }
};