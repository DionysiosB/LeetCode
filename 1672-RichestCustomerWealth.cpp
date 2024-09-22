class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int mx(0);
        for(int p = 0; p < accounts.size(); p++){
            int cur(0);
            for(int u = 0; u < accounts[p].size(); u++){cur += accounts[p][u];}
            mx = (mx > cur ? mx : cur);
        }
        return mx;
    }
}
