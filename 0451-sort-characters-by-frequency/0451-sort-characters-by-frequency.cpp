bool cmp(pair<char, int>& a,
             pair<char, int>& b)
{
    return a.second > b.second;
}
class Solution {
public:
    
    string frequencySort(string s) {
        map<char,int>mp;
        for(int i = 0; i < s.length(); i++){
            mp[s[i]]++;
        }
        vector<pair<char, int> > A;
        for (auto& it : mp) {
            A.push_back(it);
        }
        sort(A.begin(), A.end(), cmp);
        string res = "";
        for(auto i : A){
            for(int j=0; j<i.second;j++)
                res+=i.first;
        }
        return res;
    }
};