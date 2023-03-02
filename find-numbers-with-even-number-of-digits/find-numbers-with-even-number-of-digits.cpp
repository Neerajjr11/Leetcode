class Solution {
public:
    int numDig(int n){
        int count = 0;
        while(n != 0){
            count++;
            n/=10;
        }
        return count;
    }
    int findNumbers(vector<int>& nums) {
        int total = 0;
        for(int i = 0; i < nums.size(); i++){
            if(numDig(nums[i]) % 2 == 0)
                total++;
        }
        return total;
    }
};