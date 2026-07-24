class Solution {
public:
    long long maxProfit(vector<int>& workers, vector<vector<int>>& tasks) {

        std::map<int, int> ms;
        std::map<int, std::vector<int> > mt;

        for(int w : workers){++ms[w];}
        for(int p = 0; p < tasks.size(); p++){
            int lvl = tasks[p][0];
            int rew = tasks[p][1];
            mt[lvl].push_back(rew);
        }

        long long total(0);
        int mxrem(0);
        for(std::map<int, std::vector<int> >::iterator it = mt.begin(); it != mt.end(); it++){
            int lvl = it->first;
            std::vector<int> rwv = it->second;
            int avail = ms.count(lvl) ? ms[lvl] : 0;

            sort(rwv.rbegin(), rwv.rend());
            for(int p = 0; p < rwv.size(); p++){
                if(avail){total += rwv[p]; --avail;}
                else{mxrem = std::max(mxrem, rwv[p]); break;}
            }
        }

        total += mxrem;
        return total;
    }
};
