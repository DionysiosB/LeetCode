class Solution {
public:
    bool nimGame(vector<int>& piles) {
        int ans(0);
        for(int p = 0; p < piles.size(); p++){ans ^= piles[p];}
        return ans;
    }
};
