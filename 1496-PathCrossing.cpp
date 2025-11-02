class Solution {
public:
    bool isPathCrossing(string path) {
        std::set<std::pair<int, int> > s;
        int x(0), y(0);
        s.insert(std::make_pair(x, y));
        for(int p = 0; p < path.size(); p++){
            if(path[p] == 'E'){++x;}
            else if(path[p] == 'W'){--x;}
            else if(path[p] == 'N'){++y;}
            else if(path[p] == 'S'){--y;}
            std::pair<int, int> pos = std::make_pair(x, y);
            if(s.count(pos)){return true;}
            s.insert(pos);
        }

        return false;
    }
};
