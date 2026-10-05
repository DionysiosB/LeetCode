class Solution {
public:
    int gcd(int a, int b){return b ? gcd(b, a % b) : a;}
    bool canMeasureWater(int x, int y, int target) {
        if(x < 0 || y < 0 || target < 0 || x + y < target){return false;}
        return target % gcd(x, y) == 0;
    }
};
