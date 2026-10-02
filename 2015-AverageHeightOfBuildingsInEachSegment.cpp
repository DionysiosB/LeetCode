class Solution {
public:
    vector<vector<int>> averageHeightOfBuildings(vector<vector<int>>& buildings) {

        std::map<int, std::pair<int, int> > m;
        for(int p = 0; p < buildings.size(); p++){
            int left = buildings[p][0];
            int right = buildings[p][1];
            int height = buildings[p][2];
            if(!m.count(left)){m[left] = std::make_pair(0, 0);}
            m[left].first += height;  m[left].second += 1;

            if(!m.count(right)){m[right] = std::make_pair(0, 0);}
            m[right].first -= height; m[right].second -= 1;
        }

        std::vector<std::vector<int> > v;
        int prev(-1), th(0), cnt(0);
        for(std::map<int, std::pair<int, int> >::iterator it = m.begin(); it != m.end(); it++){
            int pos = it->first;
            int dh = it->second.first;
            int dc = it->second.second;
            if(cnt > 0){
                int avg = th / cnt;
                if(!v.empty() && v.back()[1] == prev && v.back()[2] == avg){v.back()[1] = pos;}
                else{
                    std::vector<int> w = {prev, pos, avg};
                    v.push_back(w);
                }
            }

            th += dh;
            cnt += dc;
            prev = pos;
        }

        return v;
    }
};
