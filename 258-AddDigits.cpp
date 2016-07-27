class Solution {
public:
    int addDigits(int num) {
        
        if(num <= 9){return num;}
        return 1 + (num - 10) % 9;
    }
};
