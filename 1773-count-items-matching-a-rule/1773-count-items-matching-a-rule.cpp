class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int j;
        if(ruleKey  == "type")
            j = 0;
        else if(ruleKey == "color")
            j = 1;
        else
            j = 2;
        int count = 0;
        for(int i = 0; i < items.size(); i++){
                if(items[i][j] == ruleValue)
                    count++;
        }
        return count;
    }
};