class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> map = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        unordered_set<string> s;
        for(int i = 0; i < words.size(); i++){
            string res = "";
            for(int j = 0; j < words[i].size(); j++){
                res += map[words[i][j] - 'a'];
            }
            s.insert(res);
        }
        return s.size();
    }
};