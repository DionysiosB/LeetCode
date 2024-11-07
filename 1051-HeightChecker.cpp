class Solution {
public:
    int heightChecker(vector<int>& heights) {
        std::vector<int> expected(heights);
        sort(expected.begin(), expected.end());
        int cnt(0); for(int p = 0; p < heights.size(); p++){cnt += (heights[p] != expected[p]);}
        return cnt;
    }
}
