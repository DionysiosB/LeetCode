class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int y(x), s(0);
        while(y){s += (y % 10); y /= 10;}
        return (x % s ? -1 : s);
    }
};
