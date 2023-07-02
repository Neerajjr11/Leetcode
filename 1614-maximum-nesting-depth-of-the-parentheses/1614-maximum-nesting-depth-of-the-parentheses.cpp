class Solution {
public:
    int maxDepth(string s) {
        int max_nest = 0;
        int nest_per_iteration = 0;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == '(')
                nest_per_iteration++;
            else if(s[i] == ')')
                nest_per_iteration--;
            max_nest = max(max_nest, nest_per_iteration);
        }
        return max_nest;
    }
};