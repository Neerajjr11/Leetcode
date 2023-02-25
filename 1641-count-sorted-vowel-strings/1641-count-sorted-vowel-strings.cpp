class Solution {
public:
    // 		  a  e  i  o  u
    // n=1   1  1  1  1  1  /a, e, i, o, u
    // n=2   5  4  3  2  1  /a-> aa,ae,ai,ao,au | e-> ee,ei,eo,eu | i-> ii,io,iu | o-> oo,ou | u-> uu
    // n=3   15 10 6  3  1
    int countVowelStrings(int n) {
        int a = 1, e = 1, i = 1, o = 1, u = 1;
        int sumi = a + e + i + o + u;
        if(n == 1)
            return sumi;
        while(n > 1){
            o += u;
            i += o;
            e += i;
            a += e;
            n--;
        }
        sumi = a + e + i + o + u;
        return sumi;
    }
};