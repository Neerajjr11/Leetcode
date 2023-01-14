class Solution {
public:
    vector<int> res;
    string smallestEquivalentString(string s1, string s2, string baseStr) {
        res.resize(26);
        for (int i = 0; i < 26; ++i)
            res[i] = i;
        for (int i = 0; i < s1.size(); ++i) {
            int a = s1[i] - 'a', b = s2[i] - 'a';
            int pa = find(a), pb = find(b);
            if (pa < pb)
                res[pb] = pa;
            else
                res[pa] = pb;
        }
        string res = "";
        for (char a : baseStr) {
            char b = (char)(find(a - 'a') + 'a');
            res += b;
        }
        return res;
    }

    int find(int x) {
        if (res[x] != x)
            res[x] = find(res[x]);
        return res[x];
    }
};