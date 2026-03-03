class Solution {
public:
    int minIncrements(int n, vector<int>& cost) {

        int total(0);
        for(int p = cost.size() - 1; p > 0; p -= 2){
            int x = cost[p];
            int y = cost[p - 1];
            int z = (x > y ? x : y);
            total += 2 * z - x - y;
            cost[p / 2 - 1] += z;
        }

        return total;
    }
};
