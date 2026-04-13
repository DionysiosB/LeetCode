class Solution {
public:
    bool isBalanced(string num) {
        int cnt(0);
        for(int p = 0; p < num.size(); p++){
            cnt += (2 * (p % 2) - 1) * (num[p] - '0');
        }

        return !cnt;
    }
};
