class Solution {
public:
    bool checkEqual(vector<int>x, vector<int> y){
        for(int i = 0; i < 26; i++)
            if(x[i] != y[i])
                return false;
        return true;
    }
    bool checkInclusion(string s1, string s2) {
        if(s2.size() < s1.size())
            return false;
        vector<int>freq1(26, 0);
        vector<int>freq2(26, 0);
        for(auto c : s1)
            freq1[c - 'a']++;
        int i = 0, j = 0;
        while(j < s2.size()){
            freq2[s2[j] - 'a']++;
            if(j - i + 1 == s1.size())
                if(checkEqual(freq1,freq2))
                    return true;
            if(j - i + 1 < s1.size())
                j++;
            else{
                freq2[s2[i] - 'a']--;
                i++;
                j++;
            }
        }
        return false;
    }
};