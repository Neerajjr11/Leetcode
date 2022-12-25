class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        vector<int> res;
        sort(nums.begin(), nums.end());
        for(auto query : queries){
            int counter = 0;
            for(auto num  : nums){
                if(query >= num){
                    query -=num;
                    counter++;
                }
                else
                    break;
            }
            res.push_back(counter);
        }
        return res;
    }
};