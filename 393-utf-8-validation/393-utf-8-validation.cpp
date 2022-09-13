class Solution {
public:
    bool validUtf8(vector<int>& data) {
        int check = 0;
        for (auto& x : data) {
            if (check == 0) {
                if ((x >> 5) == 0b110) {
                    check = 1;
                } else if ((x >> 4) == 0b1110) {
                     check = 2;
                } else if ((x >> 3) == 0b11110) {
                    check = 3;
                } else if ((x >> 7) != 0) {
                    return false;
                }
            } else {
                if ((x >> 6) != 0b10) return false;
                else check--;
            }
        } 
        return check == 0;
    }
};