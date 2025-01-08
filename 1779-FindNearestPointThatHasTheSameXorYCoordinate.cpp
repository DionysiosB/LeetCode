class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {

        int idx(-1), mnd(1e5);
        for(int p = 0; p < points.size(); p++){
            int diff(0);
            if(x == points[p][0]){diff = y - points[p][1];}
            else if(y == points[p][1]){diff = x - points[p][0];}
            else{continue;}
            diff = (diff > 0 ? diff : -diff);
            if(diff < mnd){mnd = diff; idx = p;}
        }

        return idx;
    }
};
