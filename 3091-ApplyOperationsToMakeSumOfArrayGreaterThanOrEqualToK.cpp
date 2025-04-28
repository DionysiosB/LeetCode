class Solution {
public:
    int minOperations(int k) {
        int a = std::sqrt(k);
        return (a - 1) + ((k - 1) / a);
    }
};
