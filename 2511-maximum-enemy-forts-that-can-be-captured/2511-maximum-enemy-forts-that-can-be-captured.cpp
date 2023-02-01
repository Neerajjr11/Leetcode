class Solution {
public:
    int captureForts(vector<int>& forts) {
        int res = 0;
        int total_once = 0;
        int ones = -1;
        for(int i = 0; i < forts.size(); i++){
            if(forts[i] == 1 and ones < 0 ){
                ones++; 
            }
            else if(forts[i]==1){
                total_once = 0;
                ones = 0;
            }
            else if(forts[i] == 0 and ones == 0)
                total_once++;
            else if(forts[i] == -1){
                res = max(res, total_once);
                total_once = 0;
                ones = -1;
            }
        }
        ones = -1;
        total_once = 0;
        for(int i = forts.size() - 1; i >= 0; i--){
            if(forts[i] == 1 and ones < 0){
                ones++;
                
            }
            else if(forts[i]==1){
                total_once = 0;
                ones = 0;
            }
            else if(forts[i] == 0 and ones == 0)
                total_once++;
            else{
                res = max(res, total_once);
                total_once = 0;
                ones = -1;
            }
        }
        return res;
    }
};