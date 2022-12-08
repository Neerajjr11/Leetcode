class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        stack<int> stack;
        int n = nums.size();
        int idx;
        vector<int> res(n, -1);
        for(int i = 0; i < 2*n; i++){
            if(i >=n)
                idx = i - n;
            else
                idx = i;
            while(!stack.empty() && nums[idx] > nums[stack.top()])
            {
                res[stack.top()] = nums[idx];
                stack.pop();
            }
            if(res[idx] == -1) stack.push(idx);
        }
        return res;
    }
};