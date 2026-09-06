class Solution {
public:
    int reverseDegree(string s) {
        int sum(0);
        for(int p = 0; p < s.size(); p++){sum += (p + 1) * (26 - (s[p] - 'a'));}
        return sum;
    }
};
