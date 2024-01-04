class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int, int> mp;
        for(auto& x : nums)
            mp[x]++;
        int res = 0;
        for(auto& i : mp){
            if(i.second < 2)
                return -1;
            else if(i.second % 3 == 0)
                res += i.second / 3;
            else{
                int num1 = i.second / 2;
                int num2 = i.second / 3;
                int left = i.second % 3;
                if(left % 2 == 0)
                    num2 += (left / 2);
                else
                    num2 += left;
                res += min(num1,  num2);
            }
        }
        return res;
    }
};