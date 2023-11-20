//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // You need to complete this function

    // avoid space at the starting of the string in "move disk....."
    long long count = 0;
    void solve(int n, int s, int d, int h){
        count++;
        if(n == 1){
            cout<<"move disk "<<n<<" from rod "<<s<<" to rod "<<d<<endl;
            return;
        }
        solve(n-1, s, h, d);
        cout<<"move disk "<<n<<" from rod "<<s<<" to rod "<<d<<endl;
        solve(n-1,h,d,s);
        // cout<<"move disk "<<n<<" from rod "<<s<<" to rod "<<d<<endl;
    }
    long long toh(int N, int from, int to, int aux) {
        // Your code here
        solve(N,from,to,aux);
        return count;
        
    }

};

//{ Driver Code Starts.

int main() {

    int T;
    cin >> T;//testcases
    while (T--) {
        
        int N;
        cin >> N;//taking input N
        
        //calling toh() function
        Solution ob;
        
        cout << ob.toh(N, 1, 3, 2) << endl;
    }
    return 0;
}



// } Driver Code Ends