class Solution {
public:
    bool reorderedPowerOf2(int n) {
        
        auto countDigits = [](int x) { //AUTO IS MANDATORY HERE
            std::string s = std::to_string(x);
            sort(s.begin(), s.end());
            return s;
        };

        std::string target = countDigits(n);
        for (int p = 0; p < 31; p++) {if(countDigits(1 << p) == target){return true;}}
        return false;
    }
};
