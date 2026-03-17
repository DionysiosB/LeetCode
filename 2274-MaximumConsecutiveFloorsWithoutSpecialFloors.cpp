class Solution {
public:
    int maxConsecutive(int bottom, int top, vector<int>& special) {

        sort(special.begin(), special.end());
        int left(special[0] - bottom);
        int right(top - special.back());
        int ans(left > right ? left : right);
        for(int p = 1; p < special.size(); p++){
            int diff = special[p] - special[p - 1] - 1;
            ans = (ans > diff ? ans : diff);
        }

        return ans;
    }
};
