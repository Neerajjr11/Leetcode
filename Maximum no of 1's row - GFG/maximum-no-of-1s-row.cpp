//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
        int firstOcc(vector<int> &nums, int n , int x){
            int low = 0, high = n - 1;
            while(low <= high){
                int mid = low + (high - low) / 2;
                if(nums[mid] > x)
                    high = mid - 1;
                else if(nums[mid] < x)
                    low = mid + 1;
                else{
                    if(mid == 0 || nums[mid - 1] != nums[mid])
                        return mid;
                    else
                        high = mid - 1;
                }
            }
            return -1;
        }
        int lastOcc(vector<int> &nums, int n , int x){
            int low = 0, high = n - 1;
            while(low <= high){
                int mid = low + (high - low) / 2;
                if(nums[mid] > x)
                    high = mid - 1;
                else if(nums[mid] < x)
                    low = mid + 1;
                else{
                    if(mid == n - 1 || nums[mid + 1] != nums[mid])
                        return mid;
                    else
                        low = mid + 1;
                }
            }
            return -1;
        }
        int maxOnes (vector <vector <int>> &Mat, int N, int M)
        {
            // your code here
            int maxidx = 0;
            int maxones = 0, maxi = 0;
            for(int i = 0; i < N; i++){
                maxones = 0;
                int x = firstOcc(Mat[i], M, 1);
                int y = lastOcc(Mat[i], M, 1);
                if(x != -1 and y != -1)
                    maxones = abs(y - x + 1);
                if(maxi < maxones){
                    maxi = maxones;
                    maxidx = i;
                }
            }
            return maxidx;
        }
};

//{ Driver Code Starts.

int main(){
    int t; cin >> t;
    while (t--){
        int n, m; cin >> n >> m;
        vector <vector <int>> arr (n, vector <int> (m));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> arr[i][j];
        Solution ob;        
        cout << ob.maxOnes(arr, n, m) << endl;
    }
}
// } Driver Code Ends