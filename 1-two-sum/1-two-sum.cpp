class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size(),n1,n2,sum=0,a,b;
        for(int i=0;i<n-1;i++)
        {
            n1=nums[i];
            for(int j=i+1;j<n;j++)
            { n2=nums[j];
             sum=n1+n2;
             if(sum==target)
             {
                 a=i;
                 b=j;
             }
                }
        }
        return {a,b};
    }
};