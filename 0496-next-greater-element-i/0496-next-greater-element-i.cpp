class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> nums;
        int flag = 1;
        for(int i = 0; i < nums1.size(); i++){
            vector<int>::iterator itr = find(nums2.begin(), nums2.end(), nums1[i]);
	        int idx = distance(nums2.begin(), itr);
            for(int j = idx + 1; j < nums2.size(); j++){
                if(nums2[j] > nums1[i]){
                    nums.push_back(nums2[j]);
                    flag = 0;
                    break;
                }
            }
            if(flag == 1)
                nums.push_back(-1);
            flag = 1;
        }
        return nums;
    }
};