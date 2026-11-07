class Solution {
public:
    int countDays(int days, vector<vector<int>>& meetings) {

        sort(meetings.begin(), meetings.end());
        std::vector<std::pair<int, int> > w;
        for(std::vector<int> m : meetings){
            if(w.empty() || w.back().second < m[0]){w.push_back({m[0], m[1]});}
            else{w.back().second = std::max(w.back().second, m[1]);}
        }

        int cnt(days - w.back().second);
        for(long p = 0; p < w.size(); p++){
            cnt += w[p].first - (p ? w[p - 1].second : 0) - 1;
        }

        return cnt;
    }
};
