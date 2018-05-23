class Solution {
private:
    static bool pairCompare(std::pair<int, int> a, std::pair<int, int> b){
        if(a.second < b.second){return true;}
        else if((a.second == b.second) && (a.first < b.first)){return true;}
        return false;
    }
    
public:
    int findMinArrowShots(std::vector<std::pair<int, int> > points) {
        
        if(points.size() <= 0){return 0;}
        std::sort(points.begin(), points.end(), pairCompare);
        int count(1), last(points[0].second);
        for(int p = 1; p < points.size(); p++){
            if(last < points[p].first){++count; last = points[p].second;}
        }
        return count;
    }
};
