class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<long long>st;
        for(int i = 0; i < tokens.size(); i++){
            if(tokens[i] == "+"){
                long long num1 = st.top();
                st.pop();
                long long num2 = st.top();
                st.pop();
                long long res = (num1 + num2);
                st.push(res);
            }
            else if(tokens[i] == "-"){
                long long num1 = st.top() ;
                st.pop();
                long long num2 = st.top();
                st.pop();
                long long res = (num2 - num1);
                st.push(res);
            }
            else if(tokens[i] == "*"){
                long long num1 = st.top();
                st.pop();
                long long num2 = st.top();
                st.pop();
                long long res = (num1 * num2);
                st.push(res);
            }
            else if(tokens[i] == "/"){
                long long num1 = st.top();
                st.pop();
                long long num2 = st.top();
                st.pop();
                long long res = (num2 / num1);
                st.push(res);
            }
            else st.push(stoll(tokens[i]));
        }
        return st.top();
    }
};