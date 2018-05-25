class Solution {
public:
    std::vector<int> constructRectangle(int area) {
        
        std::vector<int> a;
        if (area <= 0){return a;}
        
        int w = area;
        for (int p = 1; p * p <= area; p++) {if (area % p == 0){w = p;}}
        a.push_back(area / w); a.push_back(w);
        return a;
    }
};
