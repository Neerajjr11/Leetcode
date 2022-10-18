class Solution {
public:
    string truncateSentence(string s, int k) {
        vector<string> ans;
        string word = "";
        for (auto x : s)
        {
            if (x == ' ')
            {
                ans.push_back(word);
                word = "";
            }
            else {
                word = word + x;
            }
        }
        string res;
        ans.push_back(word);
        for(int i = 0; i<k-1;i++){
            res+=ans[i];
            res+=' ';
        }
        res+=ans[k-1];
        return res;
    }
};