class Solution {
public:
    int divisorSubstrings(int num, int k) {
        string s1 = to_string(num);
        int i = 0, j = 0;
        int count  = 0;
        while(j < s1.size()){
            if((j - i + 1) < k)
                j++;
            else if((j - i + 1) == k){
                string s = s1.substr(i, k);
                int n = stoi(s);
                if(n!= 0 and num % n == 0)
                    count++;
                i++;
                j++;
            }
        }
        return count;
    }
};