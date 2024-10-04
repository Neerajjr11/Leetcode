class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        sort(skill.begin(), skill.end());
        long long len = skill.size();
        long long j = len-2;
        long long sumi = (skill[0] * skill[len - 1]);
        long long comp = (skill[0] + skill[len - 1]);
        for(int i = 1;i < len/2;i++){
            if(comp != (skill[i] + skill[j]))
                return -1;
            sumi += (skill[i] * skill[j]);
                j--;
        }
        return sumi;
    }
};