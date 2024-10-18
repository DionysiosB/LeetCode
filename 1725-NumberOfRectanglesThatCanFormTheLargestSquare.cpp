class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        int mx(0), cnt(0);
        for(int p = 0; p < rectangles.size(); p++){
            int k = rectangles[p][0] < rectangles[p][1] ? rectangles[p][0] : rectangles[p][1];
            if(k > mx){mx = k; cnt = 1;}
            else if(k == mx){++cnt;}
        }

        return cnt;
    }
};
