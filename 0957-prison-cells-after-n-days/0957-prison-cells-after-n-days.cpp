class Solution {
public:
    vector<int> prisonAfterNDays(vector<int>& cells, int n) {
        // using lookup table approach
        vector<vector<int>>mem;
        // since the first and last cells are always 0
        // we are left with 6 cells
        // each cells has 2 possibility
        // therefore total combination will be 2 ^ 6 = 64 after this the pattern repeats
        // so we store all 64 combinations in a map and iterate through it using mod and find the ans
        vector<int>prev(cells.begin(), cells.end());
        while(n--){
            cells[0] = 0;
            for(int i = 1; i < cells.size() - 1; i++){
                if(prev[i - 1] == prev[i + 1])
                    cells[i] = 1;
                else
                    cells[i] = 0;
            }
            cells[7] = 0;
            prev = cells;
            // check if the resultant array is already present in the lookup table
            if(mem.size() >0 and mem.front() == cells) 
                return mem[n % mem.size()]; // mod of cycle length
            else
                mem.push_back(cells);
        }
        return cells;
    }
};