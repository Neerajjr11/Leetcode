class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        unordered_map<int, int> map;
        for(int i = 0; i < tasks.size(); i++){
            map[tasks[i]]++;
        }
//         if a task repeats only once then it is impossible to complete ( return -1 )
// Divide each frequency with the max completable tasks in a round (3)
// check if there's tasks left, such that if one or two tasks are incomplete, we perform another round. ( +1 )
        int rounds = 0;
        for(auto it = map.begin(); it != map.end(); it++){
            if(it->second == 1)
                return -1;
            rounds += (it->second + 2)/3;
        }
        return rounds;
    }
};