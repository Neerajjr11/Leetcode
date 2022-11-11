class Solution {
public:
    int countPrimes(int n) {
        if(n == 0 || n == 1)
            return 0;
        vector<bool> is_prime(n, true);
        is_prime[0] = is_prime[1] = false;
        for (int i = 2; i * i < n; i++) {
            if (is_prime[i]) {
                for (int j = i * i; j < n; j += i)
                    is_prime[j] = false;
            }
        }
        int count = 0;
        for(auto i : is_prime)
            if(i == true)
                count++;
        return count;
    }
};