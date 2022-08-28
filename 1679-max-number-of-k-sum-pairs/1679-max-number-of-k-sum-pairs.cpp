class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        sort(nums.begin(),nums.end());
        int left = 0,right = nums.size()-1,count = 0;
        while (left<right){
            if(nums[left]+nums[right] == k){
                left+=1;
                right-=1;
                
                count+=1;
            }
            else if(nums[left] + nums[right] >k){
                right -=1;
            }
            else{
                left+=1;
            }
        }
        return count;
    }
};