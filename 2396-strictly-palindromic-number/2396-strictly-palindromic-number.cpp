class Solution {
public:
    char reVal(int num)
    {
        if (num >= 0 && num <= 9)
            return (char)(num + '0');
        else
            return (char)(num - 10 + 'A');
    }
    string convBase(int base, int inputNum)
    {
        string res = "";
        while (inputNum > 0) {
            res += reVal(inputNum % base);
            inputNum /= base;
        }
        reverse(res.begin(), res.end());
        return res;
    }
    bool isStrictlyPalindromic(int n) {

        for(int i = 2;i<=n-2;i++)
        {
           string res = convBase(i,n);
            string s = res;
            reverse(s.begin(),s.end());
            if(s!=res)
                return false;
        }
        return true;
    }
};