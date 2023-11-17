class Solution {
public:
    static bool compare(string s1, string s2){
        //get the substrings after the first white space character
        string a = s1.substr(s1.find(' '));
        string b = s2.substr(s2.find(' '));
        //if the substrings are equal, decide the order based on the orginal string(the reason to use orginal string is because it sorts based on the identifier) , else decide with respect to substrings
        if(a == b)
            return s1 < s2;
        else
            return a < b;
        
    }
    vector<string> reorderLogFiles(vector<string>& logs) {
        vector<string> letter_logs;
        vector<string> digit_logs;
        for(auto& s: logs){
            for(int i = 0; i < s.size(); i++){
                if(s[i] == ' '){
                    if(isdigit(s[i + 1]))
                        digit_logs.push_back(s);
                    else
                        letter_logs.push_back(s);
                    break;
                }
            }
        }
        sort(letter_logs.begin(), letter_logs.end(), compare);
        vector<string> res;
        for(auto& i : letter_logs)
            res.push_back(i);
        for(auto& i : digit_logs)
            res.push_back(i);
        return res;
    }
};