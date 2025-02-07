class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int cnt(0), full(numBottles), empty(0);
        while(full){
            cnt += full;
            int total = full + empty;
            full = (total / numExchange);
            empty = total % numExchange;
        }
        
        return cnt;
    }
};
