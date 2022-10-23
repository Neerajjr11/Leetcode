class Solution {
public:
    int subarrayGCD(vector<int>& nums, int k) {
        int res = 0;
        
        for(int i=0; i<nums.size(); i++){
            int current = 0;
            for(int j=i; j<nums.size(); j++){
                current= gcd(current, nums[j]);
                if(current==k)
                    res+=1;
                else
                    res+=0;
        
            }
        }
        return res;
    }
};