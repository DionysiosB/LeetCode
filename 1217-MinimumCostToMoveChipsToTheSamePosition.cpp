class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
        int evens(0), odds(0);
        for(int p = 0; p < position.size(); p++){
            if(position[p] % 2){++odds;}
            else{++evens;}
        }

        return (evens < odds ? evens : odds);
        
    }
};
