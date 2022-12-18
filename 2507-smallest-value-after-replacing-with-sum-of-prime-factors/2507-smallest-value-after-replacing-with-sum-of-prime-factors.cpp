class Solution {
public:
    
    int smallestValue(int n) {
        unordered_set<int> visited;
          while (visited.count(n) == 0) {
                visited.insert(n);
                long long sum = 0;
            for (int i = 2; i * i <= n; i++) {
              while (n % i == 0) {
                sum += i;
                n /= i;
              }
            }
            if (n > 1) {
              sum += n;
            }
            n = sum;
          }
          return n;
    }
};