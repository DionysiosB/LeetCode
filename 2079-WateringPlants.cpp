class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        
        int cnt(0), cur(capacity);
        for(int p = 0; p < plants.size(); p++){
            if(cur < plants[p]){cur = capacity; cnt += (2 * p + 1);}
            else{++cnt;}
            cur -= plants[p];
        }
        
        return cnt;
    }
};
