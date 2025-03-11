class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        
        sort(costs.begin(), costs.end());
        for(int p = 0; p < costs.size(); p++){
            if(costs[p] <= coins){coins -= costs[p];}
            else{return p;}
        }
        
        return costs.size();
    }
};
