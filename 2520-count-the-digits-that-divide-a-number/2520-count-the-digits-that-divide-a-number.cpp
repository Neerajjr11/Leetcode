class Solution {
public:
    int countDigits(int num) {
        int n = num;
        int val,count = 0;
        while(n!=0){
            val = n%10;
            if(num % val == 0)
                count++;
            n /= 10;
        }
        return count;
    }
};