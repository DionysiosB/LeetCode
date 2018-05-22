class Solution {
public:
    int findRadius(std::vector<int> houses, std::vector<int> heaters) {
        
        if(heaters.size() <= 0 || houses.size() <= 0){return 0;}
        std::sort(houses.begin(), houses.end());
        std::sort(heaters.begin(), heaters.end());
        
        int radius(0), ind(0);
        for(int p = 0; p < houses.size(); p++) {
            while ((ind + 1 < heaters.size()) && (abs(heaters[ind + 1] - houses[p]) <= abs(heaters[ind] - houses[p]))){++ind;}
            int cand = abs(heaters[ind] - houses[p]);
            radius = (radius > cand) ? radius : cand;
        }
        
        return radius;
    }
};
