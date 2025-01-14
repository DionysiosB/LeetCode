class Solution {
public:
    vector<vector<int>> highFive(vector<vector<int>>& items) {
        std::map<int, std::vector<int> > ms;
        for(int p = 0; p < items.size(); p++){ms[items[p][0]].push_back(items[p][1]);}
        std::map<int, int> bm;
        for(std::map<int, std::vector<int> >::iterator it = ms.begin(); it != ms.end(); it++){
            int key = it->first;
            std::vector<int> vs = it->second;
            sort(vs.rbegin(), vs.rend());
            int avg(0); for(int p = 0; p < 5 && p < vs.size(); p++){avg += vs[p];}
            avg /= 5;
            bm[key] = avg;
        }

        std::vector<std::vector<int> > res;
        for(std::map<int, int>::iterator it = bm.begin(); it != bm.end(); it++){
            std::vector<int> cur; cur.push_back(it->first); cur.push_back(it->second);
            res.push_back(cur);
        }
        return res;
    }
};
