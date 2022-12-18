class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int> stack;
        vector<int> ans;
        for(int i = temperatures.size() - 1; i >= 0; i--){
            if(stack.empty()){
                stack.push(i);
                ans.push_back(0);
            }
            else{
                while(!stack.empty() && temperatures[stack.top()] <= temperatures[i])
                    stack.pop();
                if(stack.empty()){
                    stack.push(i);
                    ans.push_back(0);
                }
                else{
                    ans.push_back(stack.top() - i);
                    stack.push(i);
                }
            }
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};