class Solution {
public:
    int maxVowels(string s, int k) {
        int i = 0, j = 0;
        int res = 0;
        int num_vowels = 0;
        while(j < s.size()){
            if(s[j] == 'a' or s[j] == 'e' || s[j] == 'i' || s[j] == 'o' || s[j] == 'u')
                num_vowels++;
            if((j - i + 1) < k)
                j++;
            else if((j - i + 1) == k){
                res = max(res, num_vowels);
                if(s[i] == 'a' or s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
                    num_vowels--;
                i++;
                j++;
            }
        }
        return res;
    }
};