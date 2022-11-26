class Solution {
public:
    int bestClosingTime(string customers) {
        int count = 0,maxi = INT_MIN,idx = customers.length();
        vector<int> a(idx+1);
        for(int i = 0; i<customers.length();i++){
            if(customers[i] == 'Y'){
                count++;
            }
            else{
                count--;
            }
            a[i] = count;
        }
        
        for(int i = customers.length() ; i>=0 ;i--){
            if(a[i] >=maxi)
            {
                maxi = a[i];
                idx = i+1;
            }
        }
        if(a[idx-1] <= 0)
            return 0;
        return idx;
    }
};