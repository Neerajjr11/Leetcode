class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> mp;
        stack<int> stack;
        for(auto num: nums2){
            while(!stack.empty() && stack.top() < num){
                mp[stack.top()] = num;
                stack.pop();
            }
            stack.push(num);
        }
        for(int i = 0; i < nums1.size(); i++){
            if(mp.count(nums1[i]))
                nums1[i] = mp[nums1[i]];
            else
                nums1[i] = -1;
        }
        return nums1;
    }
};