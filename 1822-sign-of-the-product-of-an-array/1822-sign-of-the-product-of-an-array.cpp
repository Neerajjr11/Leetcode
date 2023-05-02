class Solution {
public:
    int arraySign(vector<int>& nums) {
        int numneg = 0;
        for(auto& x : nums){
            if(x == 0)
                return 0;
            if(x < 0)
                numneg++;
        }
        return numneg % 2 == 0 ? 1 : -1;
    }
};