class Solution {
public:
    int minOperations(string s) {

        const int B = 26;
        int ans(0);
        for(int p = 0; p < s.size(); p++){
            int dist = (B - (s[p] - 'a')) % B;
            ans = (ans > dist ? ans : dist);
        }

        return ans;
    }
};
