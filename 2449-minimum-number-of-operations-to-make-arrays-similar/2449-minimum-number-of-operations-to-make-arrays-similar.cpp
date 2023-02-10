class Solution {
public:
    long long makeSimilar(vector<int>& nums, vector<int>& target) {
        long long ans = 0;
        vector<int> oddnums, evennums;
        vector<int> oddtarget, eventarget;
        for(auto i : nums)
            if(i % 2 == 0)
                evennums.push_back(i);
            else
                oddnums.push_back(i);
        for(auto i : target)
            if(i % 2 == 0)
                eventarget.push_back(i);
            else
                oddtarget.push_back(i);
        sort(oddnums.begin(), oddnums.end());
        sort(oddtarget.begin(), oddtarget.end());
        sort(evennums.begin(), evennums.end());
        sort(eventarget.begin(), eventarget.end());
        for(int i = 0; i < oddnums.size(); i++)
            if(oddtarget[i] > oddnums[i])
                ans += (oddtarget[i] - oddnums[i]);
        for(int i = 0; i < evennums.size(); i++)
            if(eventarget[i] > evennums[i])
                ans += (eventarget[i] - evennums[i]);
        return ans/2;
    }
};