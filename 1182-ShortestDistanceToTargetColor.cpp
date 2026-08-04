class Solution {
public:
    vector<int> shortestDistanceColor(vector<int>& colors, vector<vector<int>>& queries) {

        const int n = colors.size();
        std::vector<std::vector<int> > dist(4, std::vector<int>(n, -1));

        std::vector<int> lv(4, -1);
        for(int p = 0; p < n; p++){
            lv[colors[p]] = p;
            for(int col = 1; col <= 3; col++){
                if(lv[col] < 0){continue;}
                dist[col][p] = p - lv[col];
            }
        }

        std::vector<int> rv(4, -1);
        for(int p = n - 1; p >= 0; p--){
            rv[colors[p]] = p;
            for(int col = 1; col <= 3; col++){
                if(rv[col] < 0){continue;}
                int cur = rv[col] - p;
                if(dist[col][p] < 0){dist[col][p] = cur;}
                else{dist[col][p] = std::min(cur, dist[col][p]);}
            }
        }

        std::vector<int> cv;
        for(std::vector q : queries){
            int idx = q[0];
            int col = q[1];
            cv.push_back(dist[col][idx]);
        }

        return cv;
    }
};
