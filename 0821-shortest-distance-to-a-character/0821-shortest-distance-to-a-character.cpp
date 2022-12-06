class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        int index = s.find(c);
        int index1 = s.find(c , index1+1);
        vector<int> res;
        for(int i = 0; i < s.length(); i++){
            if(abs(i-index) < abs(i - index1))
                res.push_back(abs(i - index));
            else
                res.push_back(abs(i - index1));
            if(abs(i-index) == 0)
                index1 = s.find(c, index + 1);
            if(abs(i - index1) == 0)
                index = s.find(c, index1 + 1);
        }
        return res;
    }
};