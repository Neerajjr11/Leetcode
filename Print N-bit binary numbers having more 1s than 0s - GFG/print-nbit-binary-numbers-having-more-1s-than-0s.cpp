//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
    void solve(int n, string op, int ones, int zeros, vector<string>& res){
        if(n == 0){
            res.push_back(op);
            return;
        }
        if(ones == zeros){
            string op1 = op;
            op1.push_back('1');
            solve(n-1,op1, ones+1, zeros, res);
        }else{
            string op1 = op;
            string op2 = op;
            op1.push_back('1');
            op2.push_back('0');
            solve(n-1,op1, ones+1, zeros, res);
            solve(n-1, op2, ones, zeros+1,res);
        }
    }
	vector<string> NBitBinary(int N)
	{
	    // Your code goes here
	    vector<string>res;
	    solve(N,"",0,0,res);
	    return res;
	}
};

//{ Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		int n;
   		cin >> n;
        Solution ob;
   		vector<string> ans = ob.NBitBinary(n);

   		for(auto i:ans)
   			cout << i << " ";

   		cout << "\n";
   	}

    return 0;
}
// } Driver Code Ends