class Solution {
public:
    double average(vector<int>& salary) {
        int mini = *min_element(salary.begin(), salary.end());
        int maxi = *max_element(salary.begin(), salary.end());
        double avg;
        double sum = 0;
        for(auto& x : salary){
            if(x != mini and x != maxi)
                sum += (double)x;
        }
        return (sum/(salary.size() - 2));
    }
};