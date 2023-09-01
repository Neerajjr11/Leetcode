class Solution {
public:
    void reverseCharacters(string& s, int startIndex, int endIndex){
        while(startIndex <= endIndex){
            swap(s[startIndex], s[endIndex]);
            startIndex++;
            endIndex--;
        }
    }
    string cleanSpace(string a, int n){
        int i = 0, j = 0;
      
        while (j < n) {
          while (j < n && a[j] == ' ') j++;             // skip spaces
          while (j < n && a[j] != ' ') a[i++] = a[j++]; // keep non spaces
          while (j < n && a[j] == ' ') j++;             // skip spaces
          if (j < n) a[i++] = ' ';                      // keep only one space
        }
        return a.substr(0, i);
    }
    string reverseWords(string s) {
        // Reverse all the characters in the entire message, giving us the correct word order but with each word backward.
        // Reverse the characters in each individual word.
        if(s.empty())
            return "";
        // to remove and leading and trailing whitespaces
        s = cleanSpace(s, s.size());
        // reverse characters of the sentence
        reverseCharacters(s, 0 , s.size() - 1);
        // cout << s;
        int currentWordStartIndex = 0;
        
        // reverse the characters in individual word
        for(int i = 0; i <= s.size(); i++){
            if(i == s.size() || s[i] == ' '){
                reverseCharacters(s, currentWordStartIndex, i - 1);
                currentWordStartIndex = i + 1;
            }
        }
        return s;
    }
};