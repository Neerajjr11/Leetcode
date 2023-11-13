class Solution {
public:
    static bool sortbyascii(const char &a,const char &b) 
    { 
        return (int(a) < int(b)); 
    } 
    string sortVowels(string s) {
        vector<char> vec;
        for(auto& c : s){
            if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
                vec.push_back(c);
        }
        sort(vec.begin(), vec.end(), sortbyascii);
        int j = 0;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U'){
                s[i] = vec[j];
                j++;
            }
        }
        return s;
    }
};