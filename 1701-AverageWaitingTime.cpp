class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers){

        const int n = customers.size();
        int ready(-1); double total(0.0);
        for(std::vector<int> customer : customers){
            ready = std::max(ready, customer[0]) + customer[1];
            total += ready - customer[0];
        }

        return total / n;
    }
};
