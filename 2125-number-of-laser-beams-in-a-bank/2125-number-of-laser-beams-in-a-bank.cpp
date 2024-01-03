// class Solution {
// public:
//     int numberOfBeams(vector<string>& bank) {
//         int totalBeams = 0;
//         vector<int>helper;
//         for(int i = 0; i < bank.size(); i++){
//             int totalSecurity = 0;
//             for(int j = 0; j < bank[0].size(); j++){
//                 if(bank[i][j] == '1')
//                     totalSecurity++;
//             }
//             helper.push_back(totalSecurity);
//         }
//         int i = 0, j = 1;
//         while(j < helper.size()){
//             if(helper[j] == 0)
//                 j++;
//             else if(helper[i] == 0)
//                 i++;
//             else if(i != j){
//                 totalBeams += (helper[i] * helper[j]);
//                 i++;
//                 j++;
//             }else
//                 j++;
//         }
//         return totalBeams;
//     }
// };

// O(m * n) solution
class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int totalBeams = 0, prevSecurityDevices = 0, currSecDev = 0;
        for(auto& s : bank){
             currSecDev = 0;
            for(auto& c : s)
                if(c == '1')
                    currSecDev++;
            if(currSecDev){
                totalBeams += (prevSecurityDevices * currSecDev);
                prevSecurityDevices = currSecDev;
            }
        }
        return totalBeams;
    }
};