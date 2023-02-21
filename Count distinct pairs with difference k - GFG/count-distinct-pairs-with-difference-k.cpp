//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	int TotalPairs(vector<int>nums, int k){
	    // Code here
	    int n = nums.size();
	    unordered_map<int, int> mp;
	    for(auto i : nums)
	        mp[i]++;
        int count = 0;
        if(k == 0){
            for(auto i : mp)
                if(i.second > 1)
                    count++;
        }
        else{
    	   for(auto i : mp){
	           if(mp.find(i.first + k) != mp.end())
	                count++;
	        }
        }
	   return count;
	}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, k;
		cin >> n >> k;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)
			cin >> nums[i];
		Solution ob;
		int ans = ob.TotalPairs(nums, k);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends