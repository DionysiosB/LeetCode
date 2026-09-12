class Solution {
public:
    int gcd(int x, int y){return y ? gcd(y, x % y) : x;}

    bool isGoodArray(vector<int>& nums) {
        int g(0);
        for(int x : nums){g = gcd(g, x);}
        return (g == 1);
    }
};
