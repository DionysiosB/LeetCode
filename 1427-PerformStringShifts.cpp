class Solution {
public:
    string stringShift(string s, vector<vector<int>>& shift) {
        int n = s.size();
        int ms(0);
        for(int p = 0; p < shift.size(); p++){ms += (2 * shift[p][0] - 1) * shift[p][1];}
        ms = (n - ms % n) % n;
        s += s;
        return s.substr(ms, n);
    }
};
