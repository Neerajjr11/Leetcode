class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;
        vector<int> res;
        for(int i = 0; i < asteroids.size(); i++){
            if(asteroids[i] > 0 || st.empty())
                st.push(asteroids[i]);
            else{
                while(!st.empty() and st.top() > 0 and st.top() < abs(asteroids[i]))
                    st.pop();
                if(!st.empty() and st.top() == abs(asteroids[i]))
                    st.pop();
                else{
                    if(st.empty() or st.top() < 0)
                        st.push(asteroids[i]);
                }
            }
        }
        while(!st.empty()){
            res.push_back(st.top());
            st.pop();
        }
        reverse(res.begin(), res.end());
        return res;
    }
};