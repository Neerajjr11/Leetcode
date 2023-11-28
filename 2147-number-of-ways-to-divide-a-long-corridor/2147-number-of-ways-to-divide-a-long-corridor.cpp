class Solution {
public:
    const int mod = 1e9+7;
    int numberOfWays(string corridor) {
        long res = 1;
        int curr_total_seats = 0;
        int prev = 0;
        for (int i = 0 ; i < corridor.size() ; i++)
        {
            if (corridor[i] != 'S')
                continue;
                
            curr_total_seats++;
            if (curr_total_seats % 2 == 1 && prev > 0)
            {
                res = res * (i - prev) % mod;
                res = res % mod;
            }
            
            prev = i;
        }
        
        if (curr_total_seats == 0 || curr_total_seats % 2 == 1)
            return 0;
        
        return res;
    }
};