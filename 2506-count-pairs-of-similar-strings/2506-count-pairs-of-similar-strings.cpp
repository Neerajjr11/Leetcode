
class Solution {
    
public:
    int similarPairs(vector<string>& words) {
        int ans = 0;
        for(int i = 0; i < words.size(); i++){
            set<char> c1;
            for(auto &c : words[i])
                    c1.insert(c);
            for(int j = i+1; j < words.size();j++){
                set<char> c2;
                for(auto &c : words[j])
                    c2.insert(c);
                if(c1 == c2)
                    ans++;
            }
        }
        return ans;
    }
};