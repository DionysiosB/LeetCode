class Solution {
public:
    int addRungs(vector<int>& rungs, int dist) {

        int prev(0), cnt(0);
        for(int p = 0; p < rungs.size(); p++){
            cnt += (rungs[p] - prev - 1) / dist;
            prev = rungs[p];
        }

        return cnt;
    }
};
