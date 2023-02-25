class Solution {
public:
    int minimumDeviation(vector<int>& nums) {
        // Multiply/ Divide all the numbers to make them all even 
        // Then take the maximum val and keep reducing them (dividing) to get the min deviation
        // once the maximum value is odd we have gotten the answer as we can't divide it anymore
        priority_queue<int> pq;
        int mini = INT_MAX;
        int n = nums.size();
        // mini is used to get the minimum element as this remains same and we keep reducing max value
        for(int i = 0; i < n; i++){
            if(nums[i] % 2 == 0){
                pq.push(nums[i]);
                mini = min(mini, nums[i]);
            }
            else{
                pq.push(nums[i] * 2);
                mini = min(mini, nums[i] * 2);
            }
        }
        int res = INT_MAX;
        while(!pq.empty()){
            int top = pq.top();
            pq.pop();
            res = min(res, top - mini);
            if(top % 2 != 0)
                break;
            mini = min(mini, top / 2);
            pq.push(top / 2);
        }
        return res;
    }
};