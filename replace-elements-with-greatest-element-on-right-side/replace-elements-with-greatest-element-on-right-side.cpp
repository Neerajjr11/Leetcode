class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int max_val_seen = -1;
        int curr = 0;
        for(int i = arr.size() - 1; i >= 0; i--){
            int curr = arr[i];
            arr[i] = max_val_seen;
            max_val_seen = max(max_val_seen, curr);
        }
        return arr;
    }
};