class Solution {
public:
    string pr_binary(int num)
    {   string res = "";
        for(int i=30;i>=0;i--) 
            res += to_string(((num>>i)&1));
        return res;
    }
    int minBitFlips(int start, int goal) {
        int total_flips = 0;
        string s1 = pr_binary(start);
        string s2 = pr_binary(goal);
        for(int i = 0; i < s1.length(); i++){
            if(s1[i] != s2[i])
                total_flips++;
        }
        return total_flips;
    }
};