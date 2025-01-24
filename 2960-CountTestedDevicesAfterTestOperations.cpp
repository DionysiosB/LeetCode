class Solution {
public:
    int countTestedDevices(vector<int>& bp) {
        int cnt(0);
        for(int p = 0; p < bp.size(); p++){cnt += (bp[p] > cnt);}
        return cnt;
    }
};
