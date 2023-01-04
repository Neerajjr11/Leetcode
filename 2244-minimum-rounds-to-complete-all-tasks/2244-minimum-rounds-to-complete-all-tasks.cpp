class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        unordered_map<int, int> map;
        for(int i = 0; i < tasks.size(); i++){
            map[tasks[i]]++;
        }
        int rounds = 0;
        for(auto it = map.begin(); it != map.end(); it++){
            if(it->second == 1)
                return -1;
            rounds += (it->second + 2)/3;
        }
        return rounds;
    }
};