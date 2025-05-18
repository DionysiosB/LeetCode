class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {

        std::multiset<std::pair<long, std::vector<int>>, std::greater<std::pair<long, std::vector<int>>>> ms;
        for(long p = 0; p < points.size(); p++){
            int x = points[p][0];
            int y = points[p][1];
            long dist = 1L * x * x + y * y;
            ms.insert(std::make_pair(dist, std::vector<int>({x, y})));
            if(ms.size() > k){ms.erase(ms.begin());}
        }

        std::vector<std::vector<int> > v;
        for(std::multiset<std::pair<long, std::vector<int> > >::iterator it = ms.begin(); it != ms.end(); it++){
            v.push_back(it->second);
        }
        return v;
    }
};
