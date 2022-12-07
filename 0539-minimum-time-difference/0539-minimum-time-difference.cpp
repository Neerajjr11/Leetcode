class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        vector<bool> time_seen(24 * 60, false); // 24 * 60 = 1440
        for(auto time : timePoints){
            int hour = (time[0] - '0')*10 + (time[1] - '0');
            int minute = (time[3] - '0') * 10 + (time[4] - '0');
            if(time_seen[(hour * 60) + minute]) return 0;
            time_seen[(hour * 60) + minute] = true;
        }
        int first_time_seen = INT_MIN;
        int prev_time_seen = INT_MIN;
        int minimum_difference = INT_MAX;
        for(int i = 0; i < 1440; i++){
            if(time_seen[i]){
                if(first_time_seen == INT_MIN){
                    first_time_seen = i;
                    prev_time_seen = i;
                }
                else
                {
                    minimum_difference = min(minimum_difference, min( i - prev_time_seen, 1440 - i + prev_time_seen));
                    prev_time_seen = i;
                }
            }
        }
        minimum_difference = min(minimum_difference, min(prev_time_seen - first_time_seen, 1440 - prev_time_seen + first_time_seen));
        return minimum_difference;
    }
};