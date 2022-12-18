class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int hottest = INT_MIN;
        vector<int> ans(temperatures.size(), 0);
        for(int i = temperatures.size() - 1; i  >= 0; i--){
            // if the temperature is greater than the hottest we store it no need to see the right side of our vector
            // this removes the infinte loop if the index is 0
            if(temperatures[i] >= hottest)
                hottest = temperatures[i];
            else{
                int j = i + 1;
                // keep iteratiing till we find the particular temperature that is greater than the current one
                while(temperatures[j] <= temperatures[i])
                    j += ans[j];
                // once the greater temp is found store the index of tht temp in the vector
                ans[i] = j - i;
            }
        }
        return ans;
    }
};