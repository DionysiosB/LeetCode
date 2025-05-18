class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int total(numBottles); int nz(numBottles);
        while(nz >= numExchange){++total; nz-= numExchange; ++nz; ++numExchange;}
        return total;
    }
};
