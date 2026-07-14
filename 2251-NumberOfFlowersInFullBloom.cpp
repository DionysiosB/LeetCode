class Solution {
public:
    vector<int> fullBloomFlowers(vector<vector<int>>& flowers, vector<int>& people) {

        std::map<int, int> m;
        for(std::vector<int> ft: flowers){
            ++m[ft[0]];
            --m[ft[1] + 1];
        }

        std::vector<std::pair<int, int> > vw(people.size());
        for(size_t p = 0; p < people.size(); p++){vw[p].first = people[p]; vw[p].second = p;}
        sort(vw.begin(), vw.end());

        int cs(0), idx(0);
        std::vector<int> res(people.size(), 0);
        for(std::map<int, int>::iterator it = m.begin(); it != m.end(); it++){
            int time = it->first;
            int diff = it->second;

            while(idx < vw.size() && vw[idx].first < time){
                res[vw[idx].second] = cs;
                ++idx;
            }

            cs += diff;

            //There's a better way to do this, with adding the people to the map, but that would require a bit more work
            while(idx < vw.size() && vw[idx].first == time){
                res[vw[idx].second] = cs;
                ++idx;
            }

            if(idx >= vw.size()){break;}
        }

        return res;
    }
};
