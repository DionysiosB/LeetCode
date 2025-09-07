class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        std::vector<int> res(queries.size());
        for(int q = 0; q < queries.size(); q++){
            const int qx = queries[q][0];
            const int qy = queries[q][1];
            const int qr = queries[q][2];
            for(int p = 0; p < points.size(); p++){
                int x = points[p][0];
                int y = points[p][1];
                res[q] += ( (x - qx) * (x - qx) + (y - qy) * (y - qy) <= qr * qr);
            }
        }

        return res;
    }
};
