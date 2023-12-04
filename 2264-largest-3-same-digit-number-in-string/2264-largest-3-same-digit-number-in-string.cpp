class Solution {
public:
    string largestGoodInteger(string num) {
        int n = num.size();
        int i = 0 , j = 0;
        unordered_map<char,int>mp;
        string res = "";
        int curr_max = -1;
        while(j < n){
            mp[num[j]]++;
            if(mp.size() < 1)
                j++;
            else if(mp.size() == 1){
                if(mp[num[j]] == 3){
                    int dig = num[j] - '0';
                    if(dig > curr_max){
                        res = num[j];
                        curr_max = dig;
                    }
                }
                j++;
            }else{
                while(mp.size() > 1){
                    mp[num[i]]--;
                    if(mp[num[i]] == 0)
                        mp.erase(num[i]);
                    i++;
                }
                j++;
            }
        }
        return res + res + res;
    }
};