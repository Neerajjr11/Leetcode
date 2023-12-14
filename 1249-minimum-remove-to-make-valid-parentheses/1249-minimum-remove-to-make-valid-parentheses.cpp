class Solution {
public:
    string minRemoveToMakeValid(string s) {
        string res = "";
        stack<pair<char, int>> st;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == ')' and !st.empty() and st.top().first == '(')
                st.pop();
            else if(!isalpha(s[i]))
                st.push({s[i], i});
        }
        while (!st.empty()) {
            int idx = st.top().second;
            st.pop();
            s[idx] = ' '; // Mark characters to be removed
        }
        for (char c : s) {
            if (c != ' ')
                res += c;
        }
        return res;
}


};