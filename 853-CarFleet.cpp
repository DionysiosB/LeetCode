class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {

        std::vector<std::pair<int, int> > v(speed.size());
        for(int p = 0; p < speed.size(); p++){v[p] = std::make_pair(target - position[p], speed[p]);}
        sort(v.begin(), v.end());
        int cnt(0);
        double prev(-1);
        for(int p = 0; p < v.size(); p++){
            double t = 1.0 * v[p].first / v[p].second;
            if(t > prev){++cnt; prev = t;}
        }

        return cnt;
    }
};
