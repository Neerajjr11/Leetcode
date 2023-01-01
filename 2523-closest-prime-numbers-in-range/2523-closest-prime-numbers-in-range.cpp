class Solution {
public:
    vector<int> getPrime(int n) {
        vector<bool> isPrime(n + 1, true);
        isPrime[0] = isPrime[1] = false;
        for (int i = 2; i * i <= n; ++i) {
            if (isPrime[i]) {
                for (int j = i * i; j <= n; j += i) {
                    isPrime[j] = false;
                }
            }
        }
        vector<int> prime;
        for (int i = 0; i <= n; ++i) {
            if (isPrime[i]) {
                prime.push_back(i);
            }
        }
        return prime;
    }

    vector<int> closestPrimes(int left, int right) {
        if(left == 1 && right == 1){
            return {-1,-1};
        }
        vector<int> prime = getPrime(right);
        vector<int> res = {-1, -1};
        int minDiff = INT_MAX;
        for (int i = 0; i < prime.size() - 1; ++i) {
            if (prime[i] >= left && prime[i + 1] <= right && prime[i + 1] - prime[i] < minDiff) {
                res[0] = prime[i];
                res[1] = prime[i + 1];
                minDiff = prime[i + 1] - prime[i];
            }
        }

        return res;
    }
};