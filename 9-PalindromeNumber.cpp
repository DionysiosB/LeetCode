class Solution {
public:
    bool isPalindrome(int x) {
        
        int y(x);
        int test(0);
        while(y > 0){test = 10 * test + (y % 10); y /= 10;}
        return (test == x);
    }
};
