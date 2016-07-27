class Solution {
public:
    std::string reverseString(std::string s) {
        for(size_t p = 0; p < s.size() / 2; p++){
            size_t q = s.size() - p - 1;
            char x = s[p]; s[p] = s[q]; s[q] = x;
        }
        return s;
    }
};
