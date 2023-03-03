class Solution {
public:
    int strStr(string haystack, string needle) {
        size_t firstOcc = haystack.find(needle);
        if(firstOcc != string :: npos)
            return firstOcc;
        return -1;
    }
};