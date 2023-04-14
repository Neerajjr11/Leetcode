class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        sort(begin(players), end(players));
        sort(begin(trainers), end(trainers));
        int res = 0;
        int j = 0, i = 0;
        while(i < players.size() and j < trainers.size()){
            if(players[i] <= trainers[j]){
                res++;
                i++;
                j++;
            }else j++;
        }
        return res;
    }
};