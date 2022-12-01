class Solution {
public:
    bool halvesAreAlike(string s) {
        int n = s.length();
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        int vowel1 = 0,vowel2 = 0;
        for(int i = 0; i < n; i++){
            if(i<n/2){
                if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
                    vowel1++;
            }
            else{
                if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
                    vowel2++;
            }
        }
        return(vowel1 == vowel2);
    }
};