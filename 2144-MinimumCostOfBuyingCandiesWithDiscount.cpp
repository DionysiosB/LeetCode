class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.rbegin(), cost.rend());
        int s(0);
        for(int p = 0; p < cost.size(); p++){
            if(p % 3 == 2){continue;}
            s += cost[p];
        }

        return s;
    }
};
