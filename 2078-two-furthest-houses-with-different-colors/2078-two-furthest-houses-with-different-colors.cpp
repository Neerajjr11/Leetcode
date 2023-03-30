class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int res = 0;
        for(int i = 0; i < colors.size(); i++){
            for(int j = 0; j < colors.size(); j++){
                if(colors[i] != colors[j])
                    res = max(res, abs(i - j));
            }
        }
        return res;
    }
};