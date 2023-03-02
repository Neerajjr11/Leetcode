class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int n = arr.size();
        int isZero = false;
        for(int i = 0; i < n; i++){
            if(arr[i] == 0){
                arr.insert(arr.begin() + i + 1, 0);
                isZero = true;
                i++;
            }
        }
        while(arr.size() > n)
            arr.pop_back();
    }
};