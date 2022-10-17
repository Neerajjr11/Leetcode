class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int X =0;
        for(int i = 0;i < operations.size(); i++){
            if(operations[i] =="--X" || operations[i] == "X--")
                X--;
            if(operations[i] == "++X" || operations[i] == "X++")
                ++X;
        }
        return X;
    }
};