class Solution {
public:
    bool isValid(string s) {
        if(s.size() % 2 != 0)
            return false;
        
        stack<char> st;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '(' or s[i] == '{' or s[i] ==  '[')
                st.push(s[i]);
            else{
                if(st.size() == 0)
                    return false;
                char check = st.top();
                if(s[i] == ')' and check != '(')
                    return false;
                else if(s[i] == '}' and check != '{')
                    return false;
                else if(s[i] == ']' and check != '[')
                    return false;
                else
                    st.pop();
            }
        }
        if(st.size() == 0)
            return true;
        else
            return false;
    }
};