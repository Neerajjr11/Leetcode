class Solution {
public:
    int sumsquares(int num){
        long long rem = 0, sq, sum;
       while(num>0){
          rem = num%10;
          if(rem==0)
             sq = 0;
          else
             sq = rem*rem;
          sum = sum + sq;
          num = num/10;
       }
        return sum;
    }
    bool isHappy(int n) {
        unordered_set<int> s;
        int sumi = 0;
        while(n){
            sumi = sumsquares(n);
            if(s.count(sumi))
                return false;
            else
                s.insert(sumi);
            n = sumi;
            if(n == 1)
                return true;
        }
        return true;
    }
};