class Solution {
public:
    int maximumWhiteTiles(vector<vector<int>>& tiles, int carpetLen) {

        sort(tiles.begin(), tiles.end());
        long long total(0);
        int idx(0), best(0);
        for(int p = 0; p < tiles.size(); p++){
            while(tiles[idx][1] + carpetLen < tiles[p][1]){
                total -= (tiles[idx][1] - tiles[idx][0] + 1);
                ++idx;
            }

            total += (tiles[p][1] - tiles[p][0] + 1);
            int cur(total);
            if(tiles[idx][0] + carpetLen <= tiles[p][1]){cur -= tiles[p][1] - carpetLen - tiles[idx][0] + 1;}
            best = (best > cur ? best : cur);
        }

        return best;
    }
};
