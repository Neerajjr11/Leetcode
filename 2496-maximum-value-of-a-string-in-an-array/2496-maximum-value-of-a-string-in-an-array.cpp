class Solution {
public:
    bool is_digits(const string &str)
    {
        return str.find_first_not_of("0123456789") == string::npos;
    }
    int maximumValue(vector<string>& strs) {
        int maxi = INT_MIN;
        int total = 0;
        for(auto word : strs){
            if(is_digits(word) == true)
                total = stoi(word);
            else
                total = word.size();
            
            maxi = max(maxi, total);
            total = 0;
        }
        return maxi;
    }
};