class Solution {
public:
    string baseNeg2(int n) {
        std::string res = "";
        while (n) {
            res = std::to_string(n & 1) + res;
            n = -(n >> 1);
        }
        return res.empty() ? "0" : res;
    }
};
