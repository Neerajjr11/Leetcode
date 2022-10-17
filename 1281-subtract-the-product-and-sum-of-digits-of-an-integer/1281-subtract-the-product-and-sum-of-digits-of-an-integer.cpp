class Solution {
public:
    int subtractProductAndSum(int n) {
        int sumi = 0;
        int pdt = 1;
        int mod = 0;
        while(n!=0){
            mod = n%10;
            sumi+=mod;
            pdt*=mod;
            n=n/10;
        }
        return pdt-sumi;
            
    }
};