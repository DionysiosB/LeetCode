class Solution {
public:
    int minFlips(string target) {
        char prev('0');
        int cnt(0);
        for(int p = 0; p < target.size(); p++){
            cnt += (target[p] != prev);
            prev = target[p];
        }

        return cnt;
    }
};
