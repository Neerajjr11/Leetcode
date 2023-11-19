// class Solution {
// public:
//     int firstUniqChar(string s) {
//         unordered_map<char, int> mp;
//         for(auto& i : s)
//             mp[i]++;
//         for(int i = 0; i < s.size(); i++){
//             if(mp[s[i]] == 1)
//                 return i;
//         }
//         return -1;
//     }
// };

class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, pair<int, int> > mp;
        for(int i = 0; i < s.size(); i++){
            mp[s[i]].first++;
            mp[s[i]].second = i;
        }
        int idx = INT_MAX;
        for(auto& i : mp){
            if(i.second.first == 1)
                idx = min(idx, i.second.second);
        }
        return idx == INT_MAX ? -1 : idx;
    }
};