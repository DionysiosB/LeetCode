class Solution {
public:
    long long minimumSteps(string s) {

        long long ones(0), total(0);
        for(long long p = 0; p < s.size(); p++){
            ones += (s[p] == '1');
            total += ones * (s[p] == '0');
        }
        
        return total;
    }
};
