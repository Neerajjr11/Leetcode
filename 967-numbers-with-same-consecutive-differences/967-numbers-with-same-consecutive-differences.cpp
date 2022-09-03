class Solution {
    void dfs(int num,int N,int K, vector<int> &res){
        if(N==0){
            res.push_back(num);
            return;
            
        }
        int last_digit = num%10;
        if(last_digit>=K)
            dfs(num*10+last_digit-K,N-1,K,res);
        if(K>0 && last_digit+K<10)
            dfs(num*10+last_digit+K,N-1,K,res);
    
    }
public:
    vector<int> numsSameConsecDiff(int n, int k) {
        vector<int>res;
        if(n==1)
            res.push_back(0);
        for(int digit = 1 ; digit < 10;digit++)
            dfs(digit,n-1,k,res);
        return res;
    }
};