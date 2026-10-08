class Solution {
public:
    int eatenApples(vector<int>& apples, vector<int>& days) {
        
        const int n = days.size();
        std::map<int, int> f;
        int cnt(0);

        for(int p = 0; p < n || !f.empty(); p++){
            if(p < n && apples[p] > 0){f[p + days[p]] += apples[p];}
            while(!f.empty()){
                std::map<int, int>::iterator it = f.begin();
                int day = it->first;
                int num = it->second;
                if(p < day && num > 0){++cnt; --f[day]; break;}
                else{f.erase(f.begin());}
            }
        }

        return cnt;
    }
};
