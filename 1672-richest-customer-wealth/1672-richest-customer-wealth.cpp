class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int n=accounts.size(),m=accounts[0].size(),i,j,maxi,sum=0;
        for(int i=0;i<n;i++)
        {   
            for(int j=0;j<m;j++)
            {sum+=accounts[i][j];}
           if (sum > maxi)
               maxi = sum;
            sum = 0;
        }
        return maxi;
    }
    
};