class Solution {
public:
    int coinChange(std::vector<int>& coins, int amount) {

        std::vector<int> count(amount + 1, -1);
        count[0] = 0;
        for(int p = 1; p <= amount; p++){
            for(int c = 0; c < coins.size(); c++){
                int value = coins[c];
                if((p < value) || count[p - value] < 0){continue;}
                if((count[p] < 0) || count[p - value] + 1 < count[p]){count[p] = count[p - value] + 1;}
            }
        }

        return count[amount];
    }
};
