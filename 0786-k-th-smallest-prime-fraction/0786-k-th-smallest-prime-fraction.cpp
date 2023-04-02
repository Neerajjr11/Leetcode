class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        ios_base::sync_with_stdio(false);
        vector<pair<double,string>> res;
        sort(begin(arr), end(arr));
        for(int i = 0; i < arr.size(); i++){
            for(int j = i + 1; j < arr.size(); j++){
                res.push_back({(double) arr[i]/arr[j],(to_string(arr[i]) + "/" + to_string(arr[j]))});
            }
        }
        sort(begin(res), end(res));
        string ans = res[k - 1].second;
        string num = "";
        string den = "";
        int i;
        for(i = 0; i < ans.length(); i++){
            if(ans[i] == '/')
                break;
            num += ans[i];
        }
        i++;
        for(; i < ans.length(); i++){
            den += ans[i];
        }
        return {stoi(num), stoi(den)};
    }
};