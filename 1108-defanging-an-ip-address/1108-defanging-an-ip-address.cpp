class Solution {
public:
    string defangIPaddr(string address) {
        vector<char> ans;
        for(int i=0;i<address.length();++i){
            if(address[i]=='.'){
                ans.push_back('[');
                ans.push_back('.');
                ans.push_back(']');
            }
            else {
                ans.push_back(address[i]);
            }
        }
        string result = "";
        for(int i=0;i<ans.size();++i){
            char a = ans[i];
            result+=a;
        }
        return result;
    }
};