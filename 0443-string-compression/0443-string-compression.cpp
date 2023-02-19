class Solution {
public:
    int compress(vector<char>& chars) {
        string s = "";
        s += chars[0];
        int count = 1;
        for(int i = 1; i < chars.size(); i++){
            char curr = chars[i];
            char prev = chars[i - 1];
            if(curr == prev)
                count++;
            else{
                if(count > 1){
                    s += to_string(count);
                    count = 1;
                }
                s += curr;
            }
        }
        if(count > 1){
            s += to_string(count);
            count = 1;
        }
        chars.clear();
        for(int i = 0; i < s.length(); i++)
            chars.push_back(s[i]);
        return s.length();
    }
};