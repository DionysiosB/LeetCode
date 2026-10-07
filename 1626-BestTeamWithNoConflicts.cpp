class Solution {
public:
    int bestTeamScore(vector<int>& scores, vector<int>& ages) {
        
        const int n = scores.size();
        std::vector<std::pair<int, int> > v(n);
        for(int p = 0; p < n; p++){v[p].first = ages[p]; v[p].second = scores[p];}
        sort(v.begin(), v.end());

        int ans(0);
        std::vector<int> w(n, 0);
        for(int p = 0; p < n; p++){
            w[p] = v[p].second;
            int add(0);
            for(int q = 0; q < p; q++){
                if(v[q].second > v[p].second){continue;}
                add = std::max(add, w[q]);
            }
            w[p] += add;
            ans = std::max(ans, w[p]);
        }

        return ans;
    }
};
