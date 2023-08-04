class Solution {
public:
    string getPermutation(int n, int k) {
        int fact = 1;
        vector<int> nums;
        for(int i = 1; i <= n; i++){
            if(i < n)
                fact *= i;
            nums.push_back(i);
        }
        string helper = "";
        k--;
        while(true){
            helper += to_string(nums[k/fact]);
            nums.erase(nums.begin() + (k/fact));
            if(nums.size() == 0)
                break;
            k %= fact;
            fact /= nums.size();
        }
        return helper;
    }
};