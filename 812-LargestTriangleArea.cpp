class Solution {
public:
    double largestTriangleArea(vector<vector<int>>& points) {
        
        long n = points.size();
        double maxArea(0);
        for(long a = 0; a < n; a++){
            for(long b = a + 1; b < n; b++){
                for(long c = b + 1; c < n; c++){
                    double area = 0.5 * std::abs((points[a][0] - points[c][0]) * (points[b][1] - points[a][1]) - (points[a][0] - points[b][0]) * (points[c][1] - points[a][1]));
                    maxArea = (maxArea > area) ? maxArea : area;
                }
            }
        }
        
     return maxArea;
        
    }
};
