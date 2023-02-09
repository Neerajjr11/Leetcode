class Solution {
public:
    long long distinctNames(vector<string>& ideas) {
        // map first char to the list of suffixes
        // from the suffix check all the possible alphabets which can be added to the first letter
        // and then check if its present in map
        // if not present increment the 2d vector by 1
        unordered_map<string, bool> mp;
        int n = ideas.size();
        for(int i = 0; i < n; i++)
            mp[ideas[i]] = true;
        vector<vector<long long>>dict(26, vector<long long>(26, 0));
        for(int i = 0; i < n; i++){
            string suffix = ideas[i].substr(1);
            int first_letter = ideas[i][0] - 'a';
            for(int j = 0; j < 26; j++){
                char comp_fletter = ('a' + j);
                string new_word = comp_fletter + suffix;
                if(mp.count(new_word) == 0)
                    dict[first_letter][j] +=1;
            }
        }
        long long count = 0;
        for(int i = 0; i < 26; i++){
            for(int j = 0; j < 26; j++){
                if(i == j)
                    continue;
                count += (dict[i][j] * dict[j][i]);
            }
        }
        return count;
    }
};