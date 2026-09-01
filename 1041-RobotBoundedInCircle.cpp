class Solution {
public:
    bool isRobotBounded(string instructions) {

        int x(0), y(0), dir(0);
        std::vector<std::pair<int, int> > dv;
        dv.push_back(std::make_pair(0, 1));
        dv.push_back(std::make_pair(-1, 0));
        dv.push_back(std::make_pair(0, -1));
        dv.push_back(std::make_pair(1, 0));

        for(char inst : instructions){
            if(inst == 'G'){x += dv[dir].first; y += dv[dir].second;}
            else if(inst == 'L'){++dir;}
            else if(inst == 'R'){--dir;}
            dir = (dir + dv.size()) % dv.size();
        }

        return (x == 0 && y == 0) || dir;
        
    }
};
