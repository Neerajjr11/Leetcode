class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int res = 0;
        unordered_set<char> s;
        for(int i = 0;i < jewels.size(); i++){
            s.insert(jewels[i]);
        }
        for(int j = 0;j < stones.size(); j++){
            if(s.find(stones[j])!=s.end())
                res++;
        }
        return res;
    }
};