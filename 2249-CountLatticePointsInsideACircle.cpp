class Solution {
public:
    int countLatticePoints(vector<vector<int>>& circles) {
        
        std::set<std::pair<int, int> > s;
        for(int p = 0; p < circles.size(); p++){
            int a = circles[p][0],b = circles[p][1],r = circles[p][2];
            for(int x = -r; x <= r; x++){
                for(int y = -r; y <= r; y++){
                    if(x * x + y * y > r*r){continue;}
                    s.insert(std::make_pair(a + x, b + y));
                }
            }
        }

        return s.size();        
    }
};
