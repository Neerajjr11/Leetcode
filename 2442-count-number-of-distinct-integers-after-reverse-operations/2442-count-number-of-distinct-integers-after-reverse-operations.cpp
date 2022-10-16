class Solution {
public:
    int reverse(int n){
        int  reversed_number = 0, remainder;

      while(n != 0) {
        remainder = n % 10;
        reversed_number = reversed_number * 10 + remainder;
        n /= 10;
      }
        return reversed_number;
    }
    int countDistinctIntegers(vector<int>& nums) {
        vector<int> nums1;
        for(int i=0;i<nums.size();i++)
        {
            nums1.push_back(reverse(nums[i]));
        }
        nums.insert( nums.end(), nums1.begin(), nums1.end() );
        set<int> s(nums.begin(), nums.end());
        int n = s.size();
        return n;
    }
};