class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int> res(boxes.size(), 0);
        for(int i = 0; i < boxes.length(); i++){
            for(int j = 0; j < boxes.length(); j++){
                if(boxes[j] == '1')
                    res[i] += abs(i - j);
            }
        }
        return res;
    }
};