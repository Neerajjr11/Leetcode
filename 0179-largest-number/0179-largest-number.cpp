class Solution {
public:
    static bool check(string &s1, string &s2){
        return (s1 + s2) >= (s2 + s1);
    }
    string largestNumber(vector<int>& nums) {
        // done using 2 pointers
        // tc O(NLOG(N) * len(string))
        // check whether all values are 0
        int x = 0;
        for(int i = 0; i < nums.size(); i++)
            if(nums[i] == 0)
                x++;
        // if all values in vector is 0 we return 0
        if(x == nums.size())
            return "0";
        // since output is string we will use string array
        vector<string> s(nums.size(),"");
        // convert all nums in string
        for(int i = 0; i < nums.size(); i++)
            s[i] = to_string(nums[i]);
        // sort on custom comparator i.e two pointer
        // suppose there are two pointers A and B
        // check if AB > BA if true no need to swap if false swap there we keep doing it until A pointer reaches the end
        sort(s.begin(), s.end(), check);
        string ans = "";
        for(int i = 0; i < s.size(); i++)
            ans += s[i];
        return ans;
        
    }
};