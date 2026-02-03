class Solution {
public:
    int fillCups(vector<int>& amount) {
        sort(amount.rbegin(), amount.rend());
        long a = amount[0];
        long b = (amount[0] + amount[1] + amount[2] + 1) / 2;
        return (a > b ? a : b);
    }
};
