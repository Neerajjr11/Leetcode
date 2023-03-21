class Solution {
public:
    bool isPalindrome(string s){
        string check = s;
        reverse(s.begin(), s.end());
        return s == check;
    }
    string firstPalindrome(vector<string>& words) {
        for(int i = 0; i < words.size(); i++)
            if(isPalindrome(words[i]))
                return words[i];
        return "";
    }
};