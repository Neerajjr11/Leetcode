class Solution {
public:
    int addMinimum(string word) {
        string check = "abc";
        int i = 0, j = 0, res = 0;
        for(i = 0; i < word.size();){
            if(word[i] != check[j])
                res++;
            else
                i++;
            j++;
            if(j == 3)
                j = 0;
        }
        // if last letter isn't c then we need to add the 3 - j count to it as well, as we aren't check for last letter the whole string 'abc'
        if(j != 0)
            res += (3 - j);
        return res;
    }
};