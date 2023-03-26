class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        stack<pair<int, int>>st;
        for(int i = 0; i < arr.size(); i++){
            auto it = make_pair(arr[i], arr[i]);
            while(!st.empty() and it.second < st.top().first){
                auto ar = st.top();
                st.pop();
                it.first = max(it.first, ar.first);
                it.second = min(it.second, ar.second);
            }
            st.push(it);
        }
        return st.size();
    }
};