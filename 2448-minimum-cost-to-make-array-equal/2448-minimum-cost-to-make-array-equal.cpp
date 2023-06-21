class Solution {
public:
    long long minCost(vector<int>& nums, vector<int>& cost) {
        int n = nums.size();
        vector<pair<long long,long long>>vec(n);
        
        for(int i=0;i<n;i++){
            vec[i]={nums[i],cost[i]};
        }
        
        sort(vec.begin(),vec.end());
        
        vector<long long>prefix1(n,0LL);
        vector<long long>suffix1(n,0LL);
        vector<long long>prefix2(n,0LL);
        vector<long long>suffix2(n,0LL);
        
        prefix1[0] = vec[0].second;
        prefix2[0] = vec[0].second*vec[0].first;

        suffix1[n-1] = vec[n-1].second;
        suffix2[n-1] = vec[n-1].second*vec[n-1].first;
        
        for(int i=1;i<n;i++){
            
            prefix1[i] = prefix1[i-1];
            prefix2[i] = prefix2[i-1];
       
            prefix1[i] += vec[i].second;
            prefix2[i] += (vec[i].second*vec[i].first);
            
        }
        
         for(int i=n-2;i>=0;i--){
             
            suffix1[i] = suffix1[i+1];
            suffix2[i] = suffix2[i+1];
            
            suffix1[i] += vec[i].second;
            suffix2[i] += (vec[i].second*vec[i].first);
             
        }
        
        
        long long ans = LONG_MAX;
        
        for(int i=0;i<n;i++){
            
            long long curr_cost = 0LL;
            if(i>0){
                curr_cost += (vec[i].first*prefix1[i-1]) - prefix2[i-1];
            }
            if(i<n-1){
                curr_cost += suffix2[i+1] - (vec[i].first*suffix1[i+1]);
            }
            ans = min(ans,curr_cost);
            
        }
        return ans;
    }
};