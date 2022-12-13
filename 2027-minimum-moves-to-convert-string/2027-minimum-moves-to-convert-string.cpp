class Solution {
public:
    int minimumMoves(string s) {
        int counter = 0;
        int i = 0;
        while(i < s.size()){
            if(s[i] == 'O')
                i++;
            else{
                counter++;
                i+=3;
            }
        }
        return counter;
    }
};