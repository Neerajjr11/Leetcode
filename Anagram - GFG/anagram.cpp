//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string a, string b){
        
        // Your code here
        if(a.length() != b.length())
            return false;
        map<int, int> mp1, mp2;
        for(int i = 0; i < a.length(); i++)
            mp1[a[i] - 'a']++;
        for(int i = 0; i < b.length(); i++)
            mp2[b[i] - 'a']++;
        if(mp1 == mp2)
            return true;
        else
            return false;
        
    }

};

//{ Driver Code Starts.

int main() {
    
    int t;

    cin >> t;

    while(t--){
        string c, d;

        cin >> c >> d;
        Solution obj;
        if(obj.isAnagram(c, d)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

}

// } Driver Code Ends