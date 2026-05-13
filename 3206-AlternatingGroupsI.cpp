class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors) {
        const int n(colors.size());
        int cnt(0);
        for(int p = 0; p < n; p++){cnt += (colors[p] != colors[(p - 1 + n) % n] && colors[p] != colors[(p + 1) % n]);}
        return cnt;
    }
};
