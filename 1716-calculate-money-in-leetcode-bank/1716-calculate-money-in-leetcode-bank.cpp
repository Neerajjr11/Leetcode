class Solution {
public:
    int totalMoney(int n) {
        int div = floor(n / 7);
        int mod = n % 7;
        mod += div;
        int nat = div, count = 0, sum = 0, start = 7;
        while(nat--){
            sum += (start * (start + 1)) / 2;
            sum -= (count * (count + 1)) / 2;
            count++;
            start++;
        }
        int mod_sum = (mod * (mod + 1)) / 2;
        int div_sum = (div * (div + 1)) / 2;
        return mod_sum - div_sum + sum;
    }
};