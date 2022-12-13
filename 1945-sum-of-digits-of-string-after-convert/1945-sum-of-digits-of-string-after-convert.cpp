class Solution {
public:
    int getLucky(string s, int k) {
        string res = "";
        for(int i = 0; i < s.size(); i++){
            res += to_string(s[i] - 'a' +1);
        }
        int sum = 0;
        while(k--){
            for(int i = 0; i < res.size(); i++){
                sum+= res[i] - '0';
            }
            res = to_string(sum);
            sum = 0;
        }
        return stoi(res);
    }
};