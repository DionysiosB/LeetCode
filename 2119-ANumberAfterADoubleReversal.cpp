class Solution {
public:
    bool isSameAfterReversals(int num) {
        if(num < 10){return true;}
        return (num % 10);
    }
}
