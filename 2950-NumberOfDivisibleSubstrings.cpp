class Solution {
public:
    int countDivisibleSubstrings(string word) {
        int res = 0;
        for (int p = 1; p < 10; p++) {
            unordered_map<int, int> m = {{0, 1}};
            int s = 0;
            for (char c : word) {
                s += 9 - ('z' - c) / 3 - p;
                res += m[s];
                ++m[s];
            }
        }

        return res;
    }
};
