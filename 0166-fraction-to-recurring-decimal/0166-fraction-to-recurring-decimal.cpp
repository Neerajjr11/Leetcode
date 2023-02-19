class Solution {
public:
    string fractionToDecimal(int numerator, int denominator) {
        if(numerator == 0)
            return "0";
        string ans = "";
        // to add -ve sign if num is -ve den is pos or vice versa
        if(numerator > 0 ^ denominator > 0)
            ans += '-';
        long num = labs(numerator);
        long den = labs(denominator);
        long q = num / den;
        long r = num % den;
        ans += to_string(q);
        // if remainder is 0
        if(r == 0)
            return ans;
        // if remainder is not 0
        ans += '.';
        // if the remainder is recurring
        unordered_map<long, int> mp;
        while(r != 0){
            if(mp.find(r) != mp.end()){
                int pos = mp[r];
                ans.insert(pos, "(");
                ans += ')';
                break;
            }else{
                mp[r] = ans.length();
                r *= 10;
                q = r / den;
                r = r % den;
                ans += to_string(q);
            }
        }
        return ans;
    }
};