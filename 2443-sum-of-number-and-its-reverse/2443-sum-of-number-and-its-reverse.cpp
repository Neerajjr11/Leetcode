class Solution {
public:
    int reverse(int n){
        int  reversed_number = 0, remainder;

      while(n != 0) {
        remainder = n % 10;
        reversed_number = reversed_number * 10 + remainder;
        n /= 10;
      }

      return reversed_number;
    }
    bool sumOfNumberAndReverse(int num) {
        
        for(int i =0;i<=num;i++)
        {
            if(i==reverse(num-i))
                return true;
        }
        return false;
        
        
    }
};