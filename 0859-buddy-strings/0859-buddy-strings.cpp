class Solution {
public:
    bool buddyStrings(string s, string goal) {
        if (s == goal){
            unordered_set<int> s1(s.begin(), s.end());
            if(s1.size() < s.size())
                return true;
            else
                return false;
        }
        if(s.size() != goal.size())
            return false;
        int i = 0, j = s.size() - 1;
        while(i < s.size() and s[i] == goal[i])
            i++;
        while(j >= 0 and s[j] == goal[j])
            j--;
        if(i < j)
            swap(s[i], s[j]);
        return s == goal;
    }
};