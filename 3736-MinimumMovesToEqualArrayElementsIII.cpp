class Solution {
public:
    int minMoves(vector<int>& nums) {
        int mx(0), s(0);
        for(int x : nums){mx = (mx > x ? mx : x); s += x;}
        return (mx * nums.size() - s);
    }
};
