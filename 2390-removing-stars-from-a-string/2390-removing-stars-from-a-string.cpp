class Solution {
public:
    string removeStars(string s) {
        string res = "";
        stack<char>st;
        for(int i = 0; i < s.size(); i++){
            if(s[i] != '*')
                st.push(s[i]);
            else{
                if(!st.empty())
                    st.pop();
                else
                    return "";
            }
        }
        while(!st.empty()){
            res += st.top();
            st.pop();
        }
        reverse(begin(res), end(res));
        return res;
    }
};