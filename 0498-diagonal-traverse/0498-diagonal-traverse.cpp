class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        map<int, vector<int>>mp;
        int n = mat.size();
        int m = mat[0].size();
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++)
                mp[(i + j)].push_back(mat[i][j]);
        }
        int j = 0;
        vector<int>res;
        for(auto& i : mp){
            if(j % 2 == 0){
                int n = i.second.size();
                while(n--)
                    res.push_back(i.second[n]);
            }else{
                int n = i.second.size(), k = 0;
                while(k < n)
                    res.push_back(i.second[k++]);
            }
            j++;
        }
        return res;
    }
};