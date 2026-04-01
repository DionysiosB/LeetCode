class Solution {
public:
    int minRefuelStops(int target, int startFuel, vector<vector<int>>& stations) {

        int pos(startFuel), cnt(0);

        std::vector<int> tsv(2); tsv[0] = target; tsv[1] = 0; stations.push_back(tsv);

        std::multiset<int, std::greater<int> > s;
        for(int p = 0; p < stations.size(); p++){
            const int where = stations[p][0];
            const int avail = stations[p][1];
            while(!s.empty() && pos < where){
                pos += *s.begin();
                ++cnt;
                s.erase(s.begin());
            }

            if(pos < where){return -1;}
            else if(pos >= target){return cnt;}
            s.insert(avail);
        }

        return cnt;
    }
};
