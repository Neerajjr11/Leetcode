class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows <= 1)
            return s;
        vector<string>row(s.size(),"");
        int curRow = 0;
        int diff = 1;
        // 1 downwards, -1 upwards
        for(char c : s){
            row[curRow] += c;
            if(curRow == numRows - 1) 
                diff = -1;
            else if( curRow == 0)
                    diff = 1;
            curRow += diff;
        }
        string res = "";
        for(auto i : row)
            res += i;
        return res;
    }
};