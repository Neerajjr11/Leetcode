class Solution {
public:
    string defangIPaddr(string address) {
        for(int i = 0 ; i < address.length(); i++)
        {
            if(address[i] == '.')
            {
                address.insert(address.begin() + (i), '[');
                i++;
                address.insert(address.begin() + (i + 1), ']');
            }
        }
        return address;
    }
};