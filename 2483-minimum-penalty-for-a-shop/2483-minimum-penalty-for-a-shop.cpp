class Solution {
public:
    int bestClosingTime(string customers) {
        int res = 0;
        int n = customers.size();
        int curr_penalty = 0;
        int min_penalty = 0;
        for(int i = 0; i < n; i++){
            (customers[i] == 'Y') ? curr_penalty++ : curr_penalty--;
            if(min_penalty < curr_penalty){
                min_penalty = curr_penalty;
                res = i + 1;
            }
        }
        return res;
    }
};