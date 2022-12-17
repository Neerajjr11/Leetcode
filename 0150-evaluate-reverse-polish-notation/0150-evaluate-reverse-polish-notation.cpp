class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        // Polish notation is the prefix notation
        // therefore the reverse polish notation is postfix notation
        stack<long long > stack;
        for(int i = 0; i < tokens.size(); i++){
            if(tokens[i] == "+"){
                long long num1 = stack.top();
                stack.pop();
                long long num2 = stack.top();
                stack.pop();
                stack.push(num1 + num2);
            }
            else if(tokens[i] == "-"){
                long long num1 = stack.top();
                stack.pop();
                long long num2 = stack.top();
                stack.pop();
                stack.push(num2 - num1);
            }
            else if(tokens[i] == "*"){
                long long num1 = stack.top();
                stack.pop();
                long long num2 = stack.top();
                stack.pop();
                stack.push(num1 * num2);
            }
            else if(tokens[i] == "/"){
                long long num1 = stack.top();
                stack.pop();
                long long num2 = stack.top();
                stack.pop();
                stack.push(num2 / num1);
            }
            else stack.push(stoll(tokens[i]));
        }
        return stack.top();
    }
};