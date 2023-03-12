class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int total_pts = accumulate(cardPoints.begin(), cardPoints.end(), 0);
        // You need to remove a sub-array from cardPoints with length n - k
        // Keep a window of size n - k over the array
        // answer =  max(answer, total_pts - sumOfCurrentWindow)
        int i = 0, j = 0, n = cardPoints.size();
        if(k == n)
            return total_pts;
        else 
            k = (n - k);
        int ans = 0, sumi = 0;
        while(j < n){
            sumi += cardPoints[j];
            if((j - i + 1) == k){
                ans = max(ans, (total_pts - sumi));
                sumi -= cardPoints[i];
                i++;
            }
            j++;
        }
        return ans;
    }
};