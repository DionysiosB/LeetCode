class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n(gas.size()), total(0), start(0), mn(0);
        for(int p = 0; p < n; p++){
            total += gas[p] - cost[p];
            if(total < mn){mn = total; start = (p + 1) % n;}
        }

        if(total < 0){return -1;}
        else{return start;}
    }
};
