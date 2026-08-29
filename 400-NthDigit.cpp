class Solution {
public:
    int findNthDigit(int n) {
        long long digit = 9;
        int first(1), length(1);
        while(n > digit * length){
            n -= digit*length;
            ++length;
            first *= 10;
            digit *= 10;
        }
        first = first + (n - 1)/length;
        string str = std::to_string(first);
        return str[(n - 1) % length] - '0';
    }
};
