class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
        map<int, vector<int>>mp;
        int j = 0;
        for(auto& x : nums){
            for(int i = 0; i < x.size(); i++){
                mp[(i + j)].push_back(x[i]);
            }
            j++;
        }
        vector<int>res;
        for(auto& i : mp){
            int n = i.second.size();
            cout << n<<" ";
            while(n--){
                res.push_back(i.second[n]);
            }
        }
        return res;
    }
};