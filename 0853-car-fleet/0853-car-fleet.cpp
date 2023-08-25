class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n = position.size();
        vector<pair<int, int>> helper;
        for(int i = 0; i < n; i++)
            helper.push_back({position[i], speed[i]});
        sort(helper.begin(), helper.end());
        vector<double> time;
        for(int i = 0; i < n; i++)
            time.push_back(double(target - helper[i].first) / helper[i].second);
            // cout<<time[i]<<" ";
        stack<double> st;
        for(int i = 0; i < n; i++){
            while(not st.empty() and time[i] >= st.top()) {
                st.pop();
            }
            st.push(time[i]);
        }
        
        return st.size();
    }
};