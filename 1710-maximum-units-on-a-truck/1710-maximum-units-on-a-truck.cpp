class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(), boxTypes.end(), [](auto &a, auto &b) {
            return a[1] > b[1];
        });
        int res = 0;
        for(auto& i : boxTypes){
            if(i[0] < truckSize){
                res += (i[0] * i[1]);
                truckSize -= i[0];
            }else{
                if(truckSize > 0){
                    i[0] -= truckSize;
                    res += (truckSize * i[1]);
                    truckSize = 0;
                }
            }
        }
        return res;
    }
};