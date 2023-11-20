//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
public:
    vector<string> res;
    void solve(string ip, string op){
        if(ip.length() == 0){
            res.push_back(op);
            return;
        }
        string op1 = op;
        string op2 = op;
        op2.push_back(' ');
        op2.push_back(ip[0]);
        op1.push_back(ip[0]);
        ip.erase(ip.begin() + 0);
        solve(ip, op1);
        solve(ip, op2);
    }
    vector<string> permutation(string S){
        // Code Here
        // string ip = "";
        string op = "";
        op += S[0];
        S.erase(S.begin() + 0);
        solve(S, op);
        reverse(res.begin(), res.end());
        return res;
    }
};

//{ Driver Code Starts.

int  main(){
    int t;
    cin>>t;
    while(t--){
        string S;
        cin>>S;
        vector<string> ans;
        Solution obj;
        ans = obj.permutation(S);
        for(int i=0;i<ans.size();i++){
            cout<<"("<<ans[i]<<")";
        }
        cout << endl;
    }
}

// } Driver Code Ends