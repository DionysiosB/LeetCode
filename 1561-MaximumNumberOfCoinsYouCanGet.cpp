class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.rbegin(), piles.rend());
        int n = piles.size() / 3;
        int s(0); for(int p = 0; p < n; p++){s += piles[2 * p + 1];}
        return s;
    }
};
