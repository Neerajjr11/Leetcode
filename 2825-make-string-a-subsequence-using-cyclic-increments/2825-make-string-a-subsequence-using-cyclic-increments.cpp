class Solution {
public:
    bool canMakeSubsequence(string str1, string str2) {
        int i = 0, j = 0;
        while(i < str1.size() and j < str2.size()){
            if(str1[i] == str2[j]){
                i++;
                j++;
            }else if(str2[j] == 'a' and str1[i] == 'z'){
                i++;
                j++;
            }else if((str2[j] - 1) == str1[i]){
                i++;
                j++;
            }else i++;
        }
        if(j >= str2.size())
            return true;
        return false;
    }
};